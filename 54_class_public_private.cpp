// class data member and methds are by default private.
#include <iostream>
using namespace std;
class emp
{
    public:
    int id;
    float sal;
};
int main()
{
    emp e1,e2;
    e1.id=1001;
    e1.sal=1200.500;
    cout<<"id of emp :"<<e1.id<<endl;
    cout<<"sal of emp :"<<e1.sal<<endl;

    return 0;
}