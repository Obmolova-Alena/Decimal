CC = gcc
CFLAGS = -Wall -Werror -Wextra
GCOV_FLAGS = -fprofile-arcs -ftest-coverage
LD_S21_DECIMAL_FLAGS = -L. -ls21_decimal -lm
LD_CHECK_FLAGS = -lcheck -lsubunit -lpthread -lm

OBJ_DIR := ./obj

HEADER = s21_decimal.h
SOURCES = $(wildcard arithmetics/*.c comparsion/*.c conversion/*.c round/*.c) 
OBJECTS := $(addprefix obj/,$(SOURCES:.c=.o))

SUITE_HEADER = tests/tests.h
SUITE_SOURCES = $(wildcard tests/*.c)
SUITE_OBJECTS = $(addprefix obj/,$(SUITE_SOURCES:.c=.o))

all: s21_decimal.a

clean:
	rm -rf obj *.a test html_report report.info filtered.info

rebuild: clean all

test: make_dir $(SUITE_HEADER) $(SUITE_OBJECTS) s21_decimal.a 
	CK_FORK=yes gcc $(wildcard $(OBJ_DIR)/obj_test*.o) $(LD_S21_DECIMAL_FLAGS) $(LD_CHECK_FLAGS) $(GCOV_FLAGS) -o $@

s21_decimal.a: make_dir $(OBJECTS)
	ar rcs $@ $(OBJ_DIR)/*.o
	ranlib $@
	cp s21_decimal.a libs21_decimal.a
	
make_dir:
	mkdir -p $(OBJ_DIR)

gcov_report: CFLAGS += -fprofile-arcs -ftest-coverage
gcov_report: test
	./test || true  
	lcov --capture --directory $(OBJ_DIR) --output-file report.info
	lcov --remove report.info '*/tests/*' -o filtered.info
	genhtml filtered.info --output-directory html_report
	xdg-open html_report/index.html || open html_report/index.html

valgrind: test
	CK_FORK=no valgrind --tool=memcheck --track-origins=yes --leak-check=full ./test

$(OBJ_DIR)/%.o: %.c $(HEADER)
	$(CC) -c $< $(CFLAGS) -o $(OBJ_DIR)/$(subst /,_,$@)