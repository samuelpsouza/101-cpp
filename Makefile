CFLAGS = -Wno-implicit-function-declaration

final: src/basic-c/main.o
	gcc $(CFLAGS) src/basic-c/main.o -o build/final.exe

main.o: src/basic-c/main.c
	echo "Compiling main file"
	gcc $(CFLAGS) -c src/basic-c/main.c