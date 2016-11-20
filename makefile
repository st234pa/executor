executor: exec.c
	gcc  exec.c -o executor
run: executor
	./executor
clean:
	rm *~
