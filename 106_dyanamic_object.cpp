//dyanmic object
#include <iostream>
using namespace std;
class emp
{
    int id;
    float sal;

public:
    void setdata(int a, float b)
    {
        id = a;
        sal = b;
    }
    void display()
    {
        cout << "emp info...... " << endl;
        cout << "id : " << id << endl;
        cout << "sal : " << sal << endl;
    }
};
int main()
{
    emp *e1=new emp;
    e1->setdata(101,4500);
    e1->display();
    delete(e1);
    return 0;
}