// dyanmic object
#include <iostream>
using namespace std;
class emp
{
    int id;
    float sal;

public:
    void setdata()
    {
        cout << "enter emp info " << endl;
        cout << "enter id : ";
        cin >> id;
        cout << "enter sal :";
        cin >> sal;
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
    emp *e1 = new emp[3], *temp;
    int i;
    temp=e1;
    for (i = 0; i < 3; i++)
    {
        e1->setdata();
        e1++; // 416
    }
    e1 = temp; // 400
    for (i = 0; i < 3; i++)
    {
        e1->display();
        e1++; // 408
    }
    return 0;
}