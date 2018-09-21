
all: 
	make -C search
	make -C sort

.PHONY : target
.PHONY : all

clean:  
	make -C search clean
	make -C sort clean

.PHONY: clean

