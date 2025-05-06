CC=gcc
TARGET=./bin/main
CFILES=main.c ll.c ll.h debugutils.h

all: build

build:
	$(CC) -o $(TARGET) $(CFILES)
	@echo "Generated release build."

debug:
	$(CC) -DDEBUG -g -O0 -o $(TARGET) $(CFILES)
	@echo "Generated debug build - expect performance issue."
