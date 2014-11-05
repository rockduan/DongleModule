#------DongleModuleCommand------
OBJS = DongleModuleCommand.o
CFLAGS = -Wall
CC = g++
RM = rm -f
INCLUDE = -I .. -I ../../DongleModule/ -I ../../ISolutionProvider \
	-I ../../IScanDongle -I ../../ISetDongleMode -I ../../IGetDongleInfo \
	-I ../../IBurnDongle -I ../../libs
#LIBS = -L ../../DongleModule/
$(OBJS):
	$(CC) -c $(CFLAGS) DongleModuleCommand.cpp -o DongleModuleCommand.o $(INCLUDE)
clean:
	$(RM) $(OBJS)
