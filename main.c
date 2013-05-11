#include "util.h"

#define _MT(num)  CONS(macro_test_, num)
#define MT(num) _MT(num)

const char* array[] = {
#include "istr.h"
};

int main(char* argv) {
	macro_test();
	print_include_chars();
	prefix_pch_test();
	return 0;
}

void macro_test() {
	MT(1)();
	MT(2)();
}

void macro_test_1() {
	printf("%s\n", STR(abc));
	printf("%s\n", STR(CONS(abc, def)));
}

void macro_test_2() {
	printf("%s\n", mock_STR(mock_str));
}

void print_include_chars() {
	int i = 0;
	for (; i < 3; i++) {
		printf("print_include_chars _%d_ : %s\n", i, array[i]);
	}
}

// now you can't gcc build this file, you need to add "-include prefix.pch" to makefile or gcc -w main.c -include prefix.pch
void prefix_pch_test() {
	printf("out-const:  %s\n", OUT_CONST);
}
