#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void StringAdd(char arr[], char ch, int index);
int Convertor(char x);
int main() {
	char str[21] = { 0 };
	int i;

	scanf("%s", str);
	for (i = 0; i < strlen(str) - 1; i++) {
		if (Convertor(str[i]) % 2 == 1 && Convertor(str[i + 1]) % 2 == 1) {
			StringAdd(str, '+', i + 1);
			i++;
		}
		else if (Convertor(str[i]) % 2 == 0 && Convertor(str[i + 1]) % 2 == 0) {
			StringAdd(str, '*', i + 1);
			i++;
		}
	}
	printf("%s\n", str);

	return 0;
}
void StringAdd(char arr[], char ch, int index) {
	int i, len = 0;

	for (i = strlen(arr) - 1; i >= index; i--)
		arr[i + 1] = arr[i];
	arr[index] = ch;
}
int Convertor(char x) {
	return x - '0';
}
