all: main main_test runTest

main.o: main.c
	gcc -std=c89 -c main.c

mylib.o: mylib.c
	gcc -std=c89 -c mylib.c

main: main.o mylib.o
	gcc -std=c89 -o main main.o mylib.o
	rm -rf main.o

main_test.o: main_test.c
	gcc -std=c89 -c main_test.c

main_test: main_test.o
	gcc -std=c89 -o main_test -Dmain_main main_test.o mylib.o
	rm -rf main_test.o mylib.o

runTest:
	./main_test
