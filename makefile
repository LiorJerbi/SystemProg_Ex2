CC = gcc
FLAGS = -Wall -g -fPIC
OBJECT_LIB = my_mat.o
OBJECT_MAIN = main.o

all: lib_my_mat.so connections $(OBJECT_LIB) $(OBJECT_MAIN)

connections: $(OBJECT_MAIN) lib_my_mat.so
	$(CC) $(FLAGS) -o connections $(OBJECT_MAIN) ./lib_my_mat.so -lm

lib_my_mat.so: $(OBJECT_LIB)
	$(CC) -shared -o lib_my_mat.so $(OBJECT_LIB) -lm
main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c -lm
my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c -lm
.PHONY:clean all

clean:
	rm -f *.o *.so *.a connections