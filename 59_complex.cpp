#include <iostream>
using namespace std;
class complex
{
    int real;
    int image;

public:
    void setcomplex(int a, int b)
    {
        real = a;
        image = b;
    }
    void display()
    {
        cout << "complex number : " << real << " + " << image << "i" << endl;
    }
    static complex sum(complex o1, complex o2)
    {
        complex obj;
        obj.real = o1.real + o2.real;
        obj.image = o1.image + o2.image;
        return obj;
    }
    static complex sub(complex o1, complex o2)
    {
        complex obj;
        obj.real = o1.real - o2.real;
        obj.image = o1.image - o2.image;
        return obj;
    }
};
int main()
{
    complex c1, c2, c3,c4;
    c1.setcomplex(3, 7);
    c2.setcomplex(5, 9);
    c1.display();
    c2.display();
    c3 = complex::sum(c1, c2);
    c3.display();
    c4=complex::sub(c1,c2);
    c4.display();
    return 0;
}