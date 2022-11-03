#include <stdio.h>
#include "Header.h"

int main() {
	char a[] = "Hello";
	char b[] = "world";
	printf("word1 = ");
	printArray(a);
	printf("word2 = ");
	printArray(b);
	printf("Length word1 = %d\n", strlen(a));
	printf("Compare word1 and word2 = %d\n", strcmp(a, b));
	printf("Letter e in word1 is in the %d place\n", pos(a, 'e'));
	strset(a, 'c');
	printf("Fill in word1 with the letter c word1 = ");
	printArray(a);
	printf("Copy word2 to word1, word1 = ");
	printArray(strcpy(a,b));
	char a2[] = "Hello";
	printf("Result of concatenation of words 1 and word2 = ");
	printArray(strcat(a2, b));
}

