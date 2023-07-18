#include <stdio.h>
/* Main file for nested loops
 * program
 */ 

void printchar(char content[])
{
        printf("%s\n", content);
        return;
}
void print_alphabet(void)
{
	char a;

        for (a = 'a'; a <= 'z'; a++)
        	printf("%c", a);
	printf("\n");
        return;
}
