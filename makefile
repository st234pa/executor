executor:executor.c
	gcc  executor.c -o executor
run:
	./executor
clean:
	rm *~
	rm executor
