CC = gcc
SeqSearch: SeqSearch.o
	$(CC) $(LDFLAGS) SeqSearch.o -o SeqSearch
SeqSearch.o: SeqSearch.c
	$(CC) $(CFLAGS) -c SeqSearch.c

clean:
	rm -rf *.o *~ *.exe SeqSearch
