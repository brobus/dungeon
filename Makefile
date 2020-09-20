SRCFILES := $(wildcard *.c)
CFLAGS = -o dungeon

.PHONY: clean 

dev:
	gcc $(SRCFILES) $(CFLAGS)

clean:
	rm dungeon