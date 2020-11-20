CC = clang++
CCFLAGS = -std=c++1z -fsanitize=fuzzer,address -Wall -Werror

all:
	clang++ fuzz.cpp -std=c++1z -fsanitize=fuzzer,address -Wall -Werror -o fuzz


