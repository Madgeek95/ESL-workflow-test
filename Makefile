CFLAGS = -Wall -Wextra -std=c99

all: test_app

test_app: main.o vector3.o
	gcc $(CFLAGS) -o test_app main.o vector3.o

main.o: main.c vector3.h
	gcc $(CFLAGS) -c main.c

vector3.o: vector3.c vector3.h
	gcc $(CFLAGS) -c vector3.c

clean:
	rm -f *.o
