# Makefile
CC = gcc
CFLAGS = -Wall
TARGET = pharmacy

all: $(TARGET)

$(TARGET): main.c medicine.c
	$(CC) $(CFLAGS) main.c medicine.c -o $(TARGET)

clean:
	rm -f $(TARGET)
