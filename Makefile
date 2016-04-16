make:
	gcc -g -Wall main.c linkedList.c -o output
clean:
	rm output 
run:
	./output
