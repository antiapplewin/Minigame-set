#include <stdio.h>

int main () {
	char ch1, ch2;
	
	ch1 = getchar();
	ch2 = getchar();
	if (ch1>=65&&ch1 <= 90) {
		ch1 += 32;
	} else {
		ch1 -= 32;
	}
	
	if (ch2>='A'&&ch2 <= 'Z') {
		ch2 += 32;
	} else {
		ch2 -= 32;
	}
	
	printf("%c %c", ch1, ch2);
	
	return 0;
}
