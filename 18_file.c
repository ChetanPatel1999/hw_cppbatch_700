// ftell()
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch;
    ptr = fopen("abc.txt", "r");
    while (1)
    {
        ch = fgetc(ptr);
        if(ch==EOF)
        {
            break;
        }
        printf("%c", ch);
    }
    printf("\ncount word in file : %d",ftell(ptr));
    fclose(ptr);
}