#---IGetDongleInfo-----
all:GetDongleInfo.o IGetDongleInfo.o
%.o:%.cpp
	g++ -c -Wall $< -o $@
clean:
	rm -f GetDongleInfo.o IGetDongleInfo.o
