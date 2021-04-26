cc=gcc -o

objects=test2.o add_function.o

sub: test1.o
	$(cc) sub test1.o
add: $(objects)
	$(cc) add $(objects)

clean: 
	rm -rf *.o
