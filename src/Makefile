TESTFLAGS = -lcheck
GCCFLAGS = -Wall -Werror -Wextra
GCOVFLAGS = -fprofile-arcs -ftest-coverage

all: s21_math.a

s21_math.a: clean
	clang-format -style=Google -i *.c *.h
	gcc $(GCCFLAGS) -g -c s21_*.c
	ar rc s21_math.a *.o
	ranlib s21_math.a
	mkdir binary_files
	mv *.o binary_files

gcov_report: s21_math.a
	gcc $(GCCFLAGS) $(GCOVFLAGS) test.c $(TESTFLAGS) s21_*.c -o gcovreport
	./gcovreport
	lcov -t "gcovreport" -o gcovreport.info -c -d . 
	genhtml -o report gcovreport.info 
	open report/src/index.html
	
test: s21_math.a
	gcc $(GCCFLAGS) $(TESTFLAGS) test.c s21_math.a -o math_test
	./math_test

clean:
	rm -rf *.o *.a *.gcno *.gcda *.info binary_files test math_test report gcovreport