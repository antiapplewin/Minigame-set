#include <stdio.h>

int main () {
	char str [] = "Coding is computer programming";
	int o =0;
	
	for (;str[o] != '\0'; o++) {
	}
	
	for (int i = o; i>=0; i--) {
		putchar(str[i]);
	}
	
	return 0;
}
