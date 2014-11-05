#----ISetDongleMode---------
all : SetDongleToIspMode.o SetDongleToNormalMode.o ISetDongleMode.o

%.o:%.cpp
	g++ -c -Wall $< -o $@
clean:
	rm -f SetDongleToIspMode.o SetDongleToNormalMode.o ISetDongleMode.o
