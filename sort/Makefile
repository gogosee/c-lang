
cc = gcc

target := insertSort selectSort bubbleSort shellSort quickSort
all: $(target)
.PHONY : target
.PHONY : all

insertSort: insertSort.o
	cc -o insertSort insertSort.o

selectSort: selectSort.o
	cc -o selectSort selectSort.o

bubbleSort: bubbleSort.o
	cc -o bubbleSort bubbleSort.o

shellSort: shellSort.o
	cc -o shellSort shellSort.o

quickSort: quickSort.o
	cc -o quickSort quickSort.o

clean:  
	rm -f *.o
	rm -rf $(target)  

.PHONY: clean

