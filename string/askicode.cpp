#include <stdio.h>

int main () {
	char ch1 = 'A', ch2 = 'a';
	
	printf("%c %c \n", ch1, ch2);
	
	ch1 += 32;
	ch2 -= 32;
	
	printf("%c %c", ch1, ch2);
	
	return 0;
}
