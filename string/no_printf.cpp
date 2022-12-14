#include <stdio.h>

int main () {
	char str[15] = {'H', 'i', ' ', 'C', '3', ' ', 'c', 'o', 'd', 'i', 'n', 'g', '\0'};
	int i = 0;
	
	while (1) {
		putchar(str[i]);
		i++;
		if (str[i] == '\0') {
			break;
		}
	}
	return 0;
}
