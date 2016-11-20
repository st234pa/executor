executor:executor.c
	gcc -o executor executor.c
run:signal
	./executor
clean:
	rm *~
	rm executor
