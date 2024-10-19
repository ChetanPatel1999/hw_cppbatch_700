// fseek():- to set a pointer at specific position.
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch;
    ptr = fopen("data.txt", "r");
    printf("currunt pos :%d\n", ftell(ptr));
    fseek(ptr, 10, SEEK_SET);
    printf("currunt pos :%d\n", ftell(ptr));
    while (ch != EOF)
    {
        ch = fgetc(ptr);
        printf("%c", ch);
    }
    printf("currunt pos :%d\n", ftell(ptr));
    fclose(ptr);
}