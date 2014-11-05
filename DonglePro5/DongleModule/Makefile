#--------DongleModule-----------
CC = g++
CFLAGS = -C -Wall -g
LIBS = -L ../ISolutionProvider
INCLUDE = -I ../ISolutionProvider -I ../IScanDongle -I ../IBurnDongle \
 -I ../IGetDongleInfo -I ../ISetDongleMode -I ../libs
all :
	$(CC) $(CFLAGS) DongleModule.cpp -o DongleModule.o $(LIBS) $(INCLUDE)
clean:
	rm -f DongleModule.o
