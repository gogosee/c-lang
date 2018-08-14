
cc = gcc

target := binary_search binary_search2 insertSort selectSort bubbleSort shellSort
all: $(target)
.PHONY : target
.PHONY : all

binary_search : binary_search.o
	cc -o binary_search binary_search.o

binary_search2: binary_search2.o
	cc -o binary_search2 binary_search2.o

insertSort: insertSort.o
	cc -o insertSort insertSort.o

selectSort: selectSort.o
	cc -o selectSort selectSort.o

bubbleSort: bubbleSort.o
	cc -o bubbleSort bubbleSort.o

shellSort: shellSort.o
	cc -o shellSort shellSort.o

clean:  
	rm -f *.o
	rm -rf $(target)  

.PHONY: clean

