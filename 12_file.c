// fgetc()// read one char from file
// fputc()// write one char into file
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch;
    ptr = fopen("01_structure.c", "r");
    while (ch!=EOF)
    {
        ch = fgetc(ptr);
        printf("%c", ch);
    }
    fclose(ptr);
}