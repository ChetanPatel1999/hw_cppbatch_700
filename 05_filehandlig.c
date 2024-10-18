//fopen:open and create a file using fopen fuction
//fprintf(): its used to write data inside file
#include <stdio.h>
void main()
{
    FILE *ptr;
    char s[50]="this is second line inside file";
    //open and create a file using fopen fuction
    ptr = fopen("abc.txt", "w");
    fprintf(ptr,"we wrote some thing inside file\n");
    fprintf(ptr,s);
    //its used to close file
    fclose(ptr);
}