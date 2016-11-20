executor:executor.c
	gcc -o exec executor.c
run:signal
	./exec
clean:
	rm *~
	rm exec
