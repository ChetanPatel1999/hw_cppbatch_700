//example of single inheritance
#include <iostream>
using namespace std;
class emp
{
    int id;
    float sal;

public:
    void setemp(int a, float b)
    {
        id = a;
        sal = b;
    }
    void displayemp()
    {

        cout << "emp id : " << id << endl;
        cout << "emp sal : " << sal << endl;
    }
};
class prgm : public emp
{
    string lang;

public:
    void setprgm(int a, float b, string s)
    {
        lang = s;
        setemp(a, b);
    }
    void dispprgm()
    {

        displayemp();
        cout << "language : " << lang << endl;
    }
};
int main()
{
    emp e1;
    e1.setemp(1001, 1200.500);
    e1.displayemp();
    cout << "_______________________________________" << endl;
    prgm p1, p2, p3;
    p1.setprgm(1001, 50000.45, "java");
    p1.dispprgm();
    return 0;
}