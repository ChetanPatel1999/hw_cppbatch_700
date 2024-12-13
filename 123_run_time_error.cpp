// divide by zero run  time error
#include <iostream>
using namespace std;
int main()
{
    printf("statrt program...\n");
    int a, b, c;
    printf("enter a value : ");
    scanf("%d", &a);
    printf("enter b value : ");
    scanf("%d", &b);
    c = a / b;
    printf("ans = %d\n", c);
    printf("programm run succefully\n");
    printf("main fuction is end\n");
    return 0;
}