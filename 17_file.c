// ftell() // its return currunt postion of pointer
#include <stdio.h>
void main()
{
    FILE *ptr;
    int n;
    ptr = fopen("abc.txt", "r");
    char ch;
    n = ftell(ptr);
    printf("current pos: %d\n", n);
    ch = fgetc(ptr);
    n = ftell(ptr);
    printf("current pos: %d\n", n);
    ch = fgetc(ptr);
    n = ftell(ptr);
    printf("current pos: %d\n", n);
}