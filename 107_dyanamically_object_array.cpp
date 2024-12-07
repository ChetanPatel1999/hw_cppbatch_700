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
    emp *e1=new emp[3],*temp;
    temp=e1;
    e1->setdata(101,4500);
    e1++;
    e1->setdata(102,5000);
    e1++;
    e1->setdata(103,4000);
    e1=temp;
    e1->display();
    e1++;
    e1->display();
    e1++;
    e1->display();
    return 0;
}