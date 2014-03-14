all: main

SRCS = sqlist.c main.c
OBJS = $(SRCS:.c=.o)

main: $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

.PHONY : clean

clean :
	rm -rf *.o main.exe
