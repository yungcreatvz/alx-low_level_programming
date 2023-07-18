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
                putchar(a);
        putchar('\n');
        return;
}
