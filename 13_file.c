//fputc() // to write single char into file
#include<stdio.h>
void main()
{
FILE *ptr;
char ch='O';
ptr=fopen("abc.txt","w");
fputc('H',ptr);
fputc(ch,ptr);
fclose(ptr);
}