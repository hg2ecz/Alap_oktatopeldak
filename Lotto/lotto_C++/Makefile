CPP=g++
CPPFLAGS=-O2 -Wall
LDFLAGS=-s

OBJS=lotto.o
TARGET=lotto

all: $(OBJS)
	$(CPP) $(OBJS) $(LDFLAGS) -o $(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
