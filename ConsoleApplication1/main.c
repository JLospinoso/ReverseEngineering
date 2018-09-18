#include "stdio.h"

int main(int argc, char *argv[]) {
	volatile a = 0x0a;
	volatile b = 0x27;
	volatile c = 0x3b;
	volatile d = 0x63;
	if (argc == 2) {
		a ^= 0x42;
		b ^= 0x42;
		c ^= 0x42;
		d ^= 0x42;
		printf("%c%c%c%c\n", a, b, c, d);
	}
	return 0;
}