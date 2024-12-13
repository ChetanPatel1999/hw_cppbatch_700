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
    try
    {
        if(b==0)
        {
            throw b;
        }
        c = a / b;
        cout<<"division : "<<c<<endl;
    }
    catch(int b)
    {
      cout<<"value of b is "<<b<<endl;
      cout<<"zero division error"<<endl;
    }
    printf("programm run succefully\n");
    printf("main fuction is end\n");
    return 0;
}