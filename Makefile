CC = g++

all: gcd fibonacci binary_search

.PHONY: gcd
gcd:
	${CC} gcd.cpp -o gcd.exe

.PHONY: fibonacci
fibonacci:
	${CC} fibonacci.cpp -o fibonacci.exe

.PHONY: binary_search
binary_search:
	${CC} binary_search.cpp ./sorts/quick_sort.cpp -o binary_search.exe

.PHONY: binary
binary:
	${CC} binary.cpp sorts/quick_sort.cpp -o binary.exe

.PHONY: clean
clean:
	rm *.exe
