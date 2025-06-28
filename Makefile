CC=gcc
CFLAGS=-Iinclude -Wall -Wextra

SRC=src/fusion.c src/imu.c examples/example_main.c
OUT=build/qfuse_demo

all:
	mkdir -p build
	$(CC) $(SRC) -o $(OUT) $(CFLAGS)

run: all
	./$(OUT)

clean:
	rm -rf build
