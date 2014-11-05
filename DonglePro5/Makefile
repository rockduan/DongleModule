#----DonglePro5--------------
.PHONY: clean mydongle main DongleModule Command IBurnDongle IGetDongleInfo\
	IScanDongle ISetDongleMode ISolutionProvider ModuleControl
#---------------------------
CC = g++
OBJS = main.o DongleModule/DongleModule.o Command/Command.o IBurnDongle/BurnDongle.o IBurnDongle/IBurnDongle.o IGetDongleInfo/GetDongleInfo.o \
IGetDongleInfo/IGetDongleInfo.o ISetDongleMode/SetDongleToIspMode.o ISetDongleMode/SetDongleToNormalMode.o ISetDongleMode/ISetDongleMode.o \
ISolutionProvider/SolutionProviderA.o  ISolutionProvider/SolutionProvider.o ModuleControl/ModuleControl.o \
ISolutionProvider/SolutionProviderFactory.o Command/DongleModuleCommand/DongleModuleCommand.o IScanDongle/ScanDonglebyBluetooth.o IScanDongle/IScanDongle.o
INCLUDE = -I ModuleControl -I Command -I ISolutionProvider -I IScanDongle\
	-I IBurnDongle -I ISetDongleMode -I IGetDongleInfo -I DongleModule\
	-I libs -I Command/DongleModuleCommand
#---------------------------
mydongle :main DongleModule Command IBurnDongle IGetDongleInfo\
        IScanDongle ISetDongleMode ISolutionProvider ModuleControl donglepro
donglepro: $(OBJS)
	$(CC) -o donglepro $(OBJS)
	chmod 777 donglepro
main: main.cpp
	$(CC) -c main.cpp -o main.o $(INCLUDE)
DongleModule:    
	cd DongleModule && $(MAKE)
Command: 
	cd Command && $(MAKE)
IBurnDongle:
	cd IBurnDongle && $(MAKE)
IGetDongleInfo:
	cd IGetDongleInfo && $(MAKE)
IScanDongle:
	cd IScanDongle && $(MAKE)
ISetDongleMode:
	cd ISetDongleMode && $(MAKE)
ISolutionProvider:
	cd ISolutionProvider && $(MAKE)
ModuleControl:
	cd ModuleControl && $(MAKE)
clean:
	rm -f main.o donglepro
