#----Command-----
.PHONY: all submake
OBJS = Command.o
CFLAGS = -Wall -g
CC = g++
RM = rm -f
all:submake $(OBJS)
submake:
	 cd DongleModuleCommand && $(MAKE)
$(OBJS): %.o:%.cpp
	$(CC) -c $(CFLAGS) $< -o $@
clean:
	$(RM) $(OBJS)


