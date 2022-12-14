#include <stdio.h>

int main () {
	char str [] = "Coding is computer programming";
	
	for (int i = sizeof(str); i>=0; i--) {
		putchar(str[i]);
	}
	
	return 0;
}
