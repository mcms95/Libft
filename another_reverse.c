#include <stdio.h>

int slen(char str[])
{
	int i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return i;
}

char	*reverse(char str[])
{
	int start = 0;
	int end = slen(str);
	char tmp[end];
	int mid = end / 2;
	end--;
	while(start < mid)
	{
		tmp[start] = str[start];
		str[start] = str[end];
		str[end] = tmp[start];
		start++;
		end--;
	}
	return str;
}

int main()
{
	char nome[] = "Joana";
	reverse(nome);
	printf("%s\n", nome);
}

