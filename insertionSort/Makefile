
all: libarray
	gcc -o main main.c -I../include -larray -L../include -Wl,-rpath=../include

libarray:
	cd ../include ; make

clean: cleanlibarray
	rm -rf main

cleanlibarray:
	cd ../include ; make clean
