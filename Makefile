make:
	gcc -g -Wall main.c ./ll/linkedList.c -o output
clean:
	rm output.exe output.exe.stackdump
run:
	./output
