.SUFFIXES : .cc
.SUFFIXES : .c
.SUFFIXES : .cpp

INCDIR =
LIBDIR =

CC = g++

CXXFLAGS = -g -std=c++11

LIBS = -lm

OBJS = main.o Recursion.o Recursion_Functions.o

TARGET = recursive

$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS) $(LIBDIR) $(LIBS)

.cc.o:
	$(CC) -c $(CXXFLAGS) $(INCDIR) $<

.c.o:
	$(CC) -c $(CXXFLAGS) $(INCDIR) $<

.cpp.o:
	$(CC) -c $(CXXFLAGS) $(INCDIR) $<

clean:
	rm -f $(OBJS) $(TARGET) core



