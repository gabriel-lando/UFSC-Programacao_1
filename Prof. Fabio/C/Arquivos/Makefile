CSOURCE   = $(wildcard *.c)

all: $(basename $(CSOURCE))

% :	%.c
	gcc -o $@ $< -lm -Wall

clean:
	-$(RM) *.dll *.o *.elf a.out core*
