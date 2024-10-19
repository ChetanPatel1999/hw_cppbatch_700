//fgetc()// read one char from file
//fputc()// write one char into file
#include<stdio.h>
void main()
{
  FILE *ptr;
  char ch;
  ptr=fopen("data.txt","r");
  ch=fgetc(ptr);//return one char from file
  printf("%c",ch);
  ch=fgetc(ptr);
  printf("%c",ch);
}