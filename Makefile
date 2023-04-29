CC=gcc
OBJS=compare_interests.o expo.o compound.o
EXECS=compare_interests

compare_interests: compare_interests.o expo.o compound.o
	gcc compare_interests.o expo.o compound.o -o compare_interests

compare_interests.o: compare_interests.c utils.h
	gcc -c compare_interests.c

expo.o: expo.c utils.h
	gcc -c expo.c

compound.o: compound.c
	gcc -c compound.c

clean:
	rm -f $(OBJS) $(EXECS)
