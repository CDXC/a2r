CC = g++
CFLAGS = -g -Wall
TARGET = a2r

all: $(TARGET)
$(TARGET): $(TARGET).cpp
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).cpp

install:
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).cpp
	mv a2r /usr/local/bin
