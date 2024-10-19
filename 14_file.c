// fgets() // read a sentance from file
// fputs()
#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch[50];
    ptr = fopen("abc.txt", "r");
    fgets(ch, 50, ptr);
    printf("%s", ch);
    fgets(ch, 50, ptr);
    printf("%s", ch);
}