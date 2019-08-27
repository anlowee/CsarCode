#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
#define key 13

int alpha[30];
char c;

int main()
{
	freopen("PlainText.txt", "r", stdin);
	freopen("CipherText.txt", "w", stdout);
	
	memset(alpha, 0, sizeof(alpha));
	while (scanf("%c", &c) != EOF)
	{
		if (c >= 'A' && c <= 'Z')
			putchar('A' + (c + key - 'A')%26);
		else if (c >= 'a' && c <= 'z')
			putchar('a' + (c + key - 'a')%26);
		else 
			putchar(c);
	}
	
	fclose(stdin);
	fclose(stdout);
}