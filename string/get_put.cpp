#include <stdio.h>

int main () {
	char ch;
	
	printf("Type languge : ");
	ch = getchar();
	putchar(ch);
	printf("%c %d\n", ch, ch);
	return 0;
}
