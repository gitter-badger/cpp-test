#include "util.h"

#define _MT(num)  CONS(macro_test_, num)
#define MT(num) _MT(num)


int main(char* argv) {
	macro_test();
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

}
