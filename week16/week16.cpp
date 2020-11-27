#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int count(char* z)
{
	int a = 0;
	while (z[a] != '\0')
	{
		a++;
	}
	return a;
}

void change(char* str)
{
	for (int i = 0; i < count(str); i++) {
		if (str[i] >= 97 && str[i] <= 122) {
			str[i] -= 32;
			printf("%c", str[i]);
		}
		else if (str[i] >= 65 && str[i] <= 90) {
			str[i] += 32;
			printf("%c", str[i]);
		}
		else 
			printf("%c", str[i]);
	}
	
}

int main() {
	char x[1000];
	scanf("%s", x);
	change(x);
	return 0;

}