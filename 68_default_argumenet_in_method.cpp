#include <iostream>
using namespace std;
class emp
{
    int id;
    float sallary;

public:
    void setdata(int a, float b=10000)
    {
        id = a;
        sallary = b;
    }
    void display()
    {
        cout << "emp info : " << endl;
        cout << "emp id : " << id << endl;
        cout << "emp sallary : " << sallary << endl;
    }
};
int main()
{
    emp e1, e2, e3;
    e1.setdata(101, 45000);
    e2.setdata(102);
    e3.setdata(103);
    e1.display();
    e2.display();
    e3.display();

    return 0;
}