build:
	@gcc -c library.c
	@ar cr library.a library.o
	@gcc main.c library.a -o main

run:
	@MALLOC_TRACE=main.log ./main
	@mtrace ./main main.log

clean:
	@rm library.o library.a main main.log