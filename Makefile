##
## EPITECH PROJECT, 2022
## blank makefile
## File description:
## Makefile
##
TARGET = solver
SRC = $(wildcard ./src/*.c)

all : compile
	gcc -o $(TARGET) main.c $(SRC) -g3 -I./

compile :

tests_run :
	gcc -o run_tests.out tests/tests.c *.c -I./ --coverage -lcriterion
	./run_tests.out

clean :
	rm -rf *.gcda
	rm -rf *.gcno

fclean : clean
	rm -rf run_tests.out
	rm -rf $(TARGET)

coding_style : fclean
	~/Documents/coding-style-checker/coding-style.sh . ..
	cat ../coding-style-reports.log

re : fclean all
