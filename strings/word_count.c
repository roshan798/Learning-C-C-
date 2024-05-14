#include <stdio.h>

int word_count(char s[])
{
	int i = 1, count = 0;
	while (s[i] != 0)
	{
		if (s[i - 1] == ' ' && s[i] != ' ')
			++count;
	}
	return count;
}
void main()
{
	int t;
	scanf("%d", &t);
	char s[100];
	while (t != 0)
	{
		scanf("%[^\n]%s", s);
		printf("%d  \n", word_count(s));
		--t;
	}
}
