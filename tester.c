#include <stdio.h>

int main()
{
	for (int i = 7; i > 0; i--) {
		printf("str[byte_index] >> (7 - bit_index) : %d\n", '~' >> i);
		printf("str[byte_index] >> (7 - bit_index) & 1 : %d\n\n", '~' >> i & 1);
	}

	return 0;
}