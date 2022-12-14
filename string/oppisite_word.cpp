#include <stdio.h>

int main () {
	char arr[100] = {'a'};
	int o = 0;
	
	scanf("%s", &arr);
	
	for (int i = 0; arr[i] != '\0'; i++) {
		putchar(arr[i] - 32);
	}
	
	return 0;
}
