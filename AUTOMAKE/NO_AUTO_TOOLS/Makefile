CC = gcc
CFLAGS = -g -Wall -Werror

TARGET = prog
BINDIR = /usr/local/bin
SOURCE = main.c func1.c func2.c func1.h func2.h
LIBOBJ = func1.o func2.o
OBJECTS = main.o
LIBS: libmylib.a

all: $(TARGET)

.PHONY: copy
copy:
	cp func1.c func1.d

clean:
	rm -rf $(TARGET)
	rm -rf main.o func1.o func2.o

install: $(TARGET)
	cp $(TARGET) $(BINDIR)

uninstall:
	rm -f $(BINDIR)/$(TARGET)

# link object files to executable
$(TARGET): $(OBJECTS) $(LIBS)
	$(CC) -o $(TARGET) $(OBJECTS) libmylib.a

#%.o: %.c
#	$(CC) $(CFLAGS) -c $< -o $@

main.o: main.c func1.h func2.h
	$(CC) $(CFLAGS) -O -c main.c

func1.o: func1.c
	$(CC) $(CFLAGS) -O -c func1.c

func2.o: func2.c
	$(CC) $(CFLAGS) -O -c func2.c

libmylib.a: func1.o func2.o
	ar rcs libmylib.a func1.o func2.o
