CC=gcc
AR=ar
FLAGS= -Wall -g
OBJECTS_MAIN=main.o
OBJECTS_LIB=basicMath.o power.o


all: mymathd mymaths mains maind
#dynamic
maind: main.o mymathd
	$(CC) $(FLAGS) -o maind main.o ./libmyMath.so
#static
mains: main.o mymaths
	$(CC) $(FLAGS) -o mains main.o  libmyMath.a
#creating dynamic lib .so
mymathd: basicMath.o power.o
	$(CC) -shared -o libmyMath.so  basicMath.o power.o     
#creating static lib .a
mymaths: basicMath.o power.o
	$(AR) -rcs libmyMath.a basicMath.o power.o
main.o: main.c myMath.h
	$(CC) $(FLAGS) -c main.c
basicMath.o: basicMath.c myMath.h
	$(CC) $(FLAGS) -c basicMath.c
power.o: power.c myMath.h
	$(CC) $(FLAGS) -c power.c

.PHONY: clean

clean:
	rm -f *.o maind mains *.a *.so
