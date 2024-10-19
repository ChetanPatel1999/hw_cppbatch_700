// fscanf()// read data from file
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch[20];
    ptr = fopen("data.txt", "r");
    while (fscanf(ptr, "%s", ch)!=EOF)
    {
        printf("%s ",ch);
    }
}