#--------DongleModule-----------
CC = g++
CFLAGS = -c -Wall
LIBS = -L ../ISolutionProvider
INCLUDE = -I ../ISolutionProvider -I ../IScanDongle -I ../IBurnDongle \
 -I ../IGetDongleInfo -I ../ISetDongleMode -I ../libs
all :
	$(CC) $(CFLAGS) DongleModule.cpp -o DongleModule.o $(INCLUDE)
clean:
	rm -f DongleModule.o
