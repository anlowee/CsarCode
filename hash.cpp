#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <map>
using namespace std;
#define MAX_PRIME_LESS_THAN_HASH_LEN 51787

int tot = 0, cnt = 0;
int cntWord[60000];
int hasharray[60000];

bool cmp(int a, int b)
{
	return cntWord[a] > cntWord[b];
}

unsigned int hash_func(char *str, int len)
{
     register unsigned int sum = 0; 
     register unsigned int h = 0;
     register char *p = str;
     while(p - str < len) 
     {
          register unsigned short a = *(p++);
          sum ^=  a * (p - str); 
          h ^= a / (p - str);
     }
     return ((sum << 16) | h) % MAX_PRIME_LESS_THAN_HASH_LEN;
}

string word;
map<int, string> dict;
map<int, string>::iterator iter;

int main()
{
	freopen("SampleText.txt", "r", stdin);
	freopen("Hash.txt", "w", stdout);
	
	memset(cntWord, 0, sizeof(cntWord));
	memset(hasharray, 0, sizeof(hasharray));
	
	while(cin >> word)
	{
		int len = word.length();
		if (word[0] < 'A' || (word[0] > 'Z' && word[0] < 'a') || word[0] > 'z')
			continue;
		tot++;
		if (word[len - 1] < 'A' || (word[len - 1] > 'Z' && word[len - 1] < 'a') || word[len - 1] > 'z')
		{
			len--;
			word.pop_back();
		}
		char str[100];
		for (int i = 0; i < len; i++)
			str[i] = word[i];
		
		int hash = hash_func(str, len);
		if (!cntWord[hash])
		{
			hasharray[cnt] = hash;
			cnt++;		
		}
		cntWord[hash]++;
		dict.insert(pair<int, string>(hash, word));
	}
	
	sort(hasharray, hasharray + cnt, cmp);

	for (int i = 0; i < 1000; i++)
		cout << "sample[" << i << "]=\"" << dict[hasharray[i]] << "\",";		

	fclose(stdin);
	fclose(stdout);
}