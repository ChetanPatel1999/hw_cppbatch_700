#include <iostream>
using namespace std;
int main()
{
    int x = -12;
    printf("programm is start ...\n");
    try
    {
        printf("inside try\n");
        if (x < 0)
        {
            throw x;
        }
        printf("vale of x : %d \n", x);
        printf("after throw key word\n");
    }
    catch (int x)
    {
        cout << x << " is not positive" << endl;
        cout << "catch block is exicute" << endl;
    }
    printf("after catch block 1\n");
    printf("after catch block 2\n");
    return 0;
}