// example of single inheritance
#include <iostream>
using namespace std;
class emp
{
    int id;
    float sal;

public:
    emp()
    {
    }
    emp(int a, float b)
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
    prgm()
    {
    }
    prgm(int a, float b, string s) : emp(a, b)
    {
        lang = s;
    }
    void dispprgm()
    {

        displayemp();
        cout << "language : " << lang << endl;
    }
};
int main()
{
    emp e1(1001, 1200.500);
    e1.displayemp();
    cout << "_______________________________________" << endl;
    prgm p1(1001, 50000.45, "java"), p2, p3;
    p1.dispprgm();
    return 0;
}