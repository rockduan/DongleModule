#------------IScanDongle-----------
all:ScanDonglebyBluetooth.o ScanDonglebyNEC.o IScanDongle.o
%.o:%.cpp
	g++ -c -Wall $< -o $@
clean:
	rm -f *.o
