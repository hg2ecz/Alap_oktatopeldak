CC=gcc
CFLAGS=-O2 -Wall
LDFLAGS=-s

OBJS=lotto.o
TARGET=lotto

all: $(OBJS)
	$(CC) $(OBJS) $(LDFLAGS) -o $(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
