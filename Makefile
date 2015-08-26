CC = gcc
SeqSearch: SeqSearch.o
	$(CC) $(LDFLAGS) SeqSearch.o -o SeqSearch
	
BinarySortTree: BinarySortTree.o
	$(CC) $(LDFLAGS) BinarySortTree.o -o BinarySortTree
	
HashSearch: HashSearch.o
	$(CC) $(LDFLAGS) HashSearch.o -o HashSearch

SeqSearch.o: SeqSearch.c
	$(CC) $(CFLAGS) -c SeqSearch.c
	
BinarySortTree.o: BinarySortTree.c
	$(CC) $(CFLAGS) -c BinarySortTree.c

HashSearch.o: HashSearch.c
	$(CC) $(CFLAGS) -c HashSearch.c
clean:
	rm -rf *.o *~ *.exe SeqSearch BinarySortTree HashSearch
