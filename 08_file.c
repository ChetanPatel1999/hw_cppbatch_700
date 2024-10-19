//fscanf()// read data from file
#include<stdio.h>
void main()
{
 FILE *ptr;
 char ch[20];
 ptr=fopen("data.txt","r");
 fscanf(ptr,"%s",ch);
 printf("%s",ch);
}