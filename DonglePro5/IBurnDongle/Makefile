#-----IBurnDongle-------
all: IBurnDongle BurnDongle
CC = g++
CFLAGS = -c -Wall
IBurnDongle:
	$(CC) $(CFLAGS) IBurnDongle.cpp -o IBurnDongle.o 
BurnDongle:IBurnDongle.cpp
	g++ -c BurnDongle.cpp -o BurnDongle.o 
clean:
	rm -f BurnDongle.o IBurnDongle.o

