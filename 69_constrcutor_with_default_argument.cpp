// constrcutor with default argument
#include <iostream>
using namespace std;
class emp
{
    int id;
    float sallary;

public:
    emp(int a, float b=10000)
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
    emp e1(101,45000), e2(102), e3(103);
    e1.display();
    e2.display();
    e3.display();

    return 0;
}