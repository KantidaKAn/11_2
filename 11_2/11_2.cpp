#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int lens(char* str) {
	int count = 0;
	while (str[++count] != '\0');
	return count;
}
void tri(char* str) {
	
	for (int i = 0; i < lens(str); i++) {
		for (int j = i; j < lens(str) ; j++) {
			printf("%c", str[j]);
		}
		printf("\n");
	}
}
int main() {
	char str[1000];
	scanf("%[^\n]", str);
	tri(str);
	return 0;
}