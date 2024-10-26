// fuction with return type ---- with argument
#include <iostream>
using namespace std;
int cube(int num)
{
    return num * num * num;
}
float square(float num)
{
    return num * num;
}
char upercase(char ch)
{
    return ch - 32;
}
int main()
{
    cout << "cube : " << cube(5) << endl;
    cout << "square : " << square(4.1) << endl;
    cout << "uper case : " << upercase('t') << endl;
    return 0;
}