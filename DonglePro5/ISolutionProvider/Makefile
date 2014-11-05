#--ISolutionProvider----
all: SolutionProviderA.o SolutionProviderB.o SolutionProviderFactory.o SolutionProvider.o
CPPFLAGS = -c -Wall -g
INCLUDE = -I ../IScanDongle -I ../IGetDongleInfo -I ../IBurnDongle -I ../ISetDongleMode
%.o: %.cpp
	g++ $(CPPFLAGS) $< -o $@ $(INCLUDE)
clean:
	rm -f *.o
