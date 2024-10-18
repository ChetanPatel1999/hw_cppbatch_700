#include <stdio.h>
void main()
{
    FILE *ptr;
    ptr=fopen("C:\\Users\\HP\\Documents\\HELLO WORLD INSTITUTE BATCHES\\martine\\abc.txt","a");
    int num, fact = 1;
    printf("enter a num : ");
    scanf("%d", &num);
    int i;
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("factorial of %d = %d", num, fact);
    fprintf(ptr,"factorial of %d = %d\n",num,fact);
    fclose(ptr);
}