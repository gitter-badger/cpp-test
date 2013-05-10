#include "util.h"

int main(char* argv) {
	printf("%s\n", STR(abc));
	printf("%s\n", STR(CONS(abc, def)));
	return 0;
}
