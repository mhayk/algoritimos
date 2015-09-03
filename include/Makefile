all:
	gcc -c -Wall -Werror -fpic array.c
	gcc -shared -o libarray.so array.o
clean:
	rm -rf array.o libarray.so
