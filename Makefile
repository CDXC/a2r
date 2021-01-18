CC = g++
CFLAGS = -g -Wall
TARGET = a2r

all: $(TARGET)
$(TARGET): $(TARGET).cpp
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).cpp

clean:
	rm /usr/local/bin/$(TARGET)
	rm $(TARGET)

install:
	mv $(TARGET) /usr/local/bin
