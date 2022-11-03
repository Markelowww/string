#include <stdlib.h>
#include <stdio.h>

int strlen(char* s)
{
	int k = 0;
	while (s[k++]);
	return --k;
}

int lenghtBoth(char* s1, char* s2) {
	return strlen(s1) + strlen(s2);
}

void strsetPlus(char* s, char c, int start) {
	int size = strlen(s);
	for (int i = start; i < size; i++)
	{
		*(s + i) = c;
	}
}

char* strcat(char* s1, char* s2) {
	int size = lenghtBoth(s1, s2);
	int firstSize = strlen(s1);
	char* s3 = (char*)malloc(size * sizeof(int));
	for (int i = 0; i < firstSize; i++)
		s3[i] = s1[i];
	for (int i = 0; i < size; i++)
		s3[i + firstSize] = s2[i];
	s1 = s3;
	return s1;
}

void printArray(char* a)
{
		printf("%s\n", a);
}


char* strcpy(char* s1, char* s2) {
	int sizeS1 = strlen(s1);
	int sizeS2 = strlen(s2);
	int size = lenghtBoth(s1, s2);
	if (sizeS1 >= sizeS2)
		for (int i = 0; i < sizeS1; i++)
			s1[i] = s2[i];
	else {
		char* s3 = (char*)malloc(sizeS2 * sizeof(int));
		for (int i = 0; i < sizeS2; i++)
			s3[i] = s2[i];
		s1 = s3;
		strsetPlus(s1, '_', sizeS2);
	}
	return s1;
}

int strcmp(char* s1, char* s2) {
	int sizeS1 = strlen(s1);
	int sizeS2 = strlen(s2);
	int flag = 1;
	if (sizeS1 != sizeS2)
		return 0;
	for (int i = 0; i < sizeS1; i++)
	{
		if (s1[i] != s2[i])
			flag = 0;
	}
	if (flag > 0)
		return 1;
	else
		return 0;
}

void strset(char* s, char c) {
	int size = strlen(s);
	for (int i = 0; i < size; i++)
	{
		*(s + i) = c;
	}
}

int pos(char* s, char c) {
	int i = 1;
	char* help = s;
	while (*s != c) {
		s++;
		i++;
	}
	if (*s == c) {
		s = help;
		return i;
	}
	else {
		s = help;
		return 0;
	}
}