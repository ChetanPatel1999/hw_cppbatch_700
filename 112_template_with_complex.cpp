#include <iostream>
using namespace std;
template <class t>
class complex
{
    t real;
    t image;

public:
    complex()
    {
    }
    complex(t a, t b)
    {
        real = a;
        image = b;
    }
    void display()
    {
        cout << "complex number : " << real << " + " << image << "i" << endl;
    }
    complex operator+(complex obj)
    {
        complex res;
        res.real = real + obj.real;    // 17
        res.image = image + obj.image; // 13
        return res;
    }
     complex operator-(complex obj)
    {
        complex res;
        res.real = real - obj.real;    // 17
        res.image = image - obj.image; // 13
        return res;
    }
};
int main()
{
    complex<int> c1(12, 5), c2(5, 8), c3, c4;
    c1.display();
    c2.display();
    c3 = c1 + c2;
    c4 = c1 - c2;
    c3.display();
    c4.display();
    cout<<"____________________________"<<endl;
    complex<float> f1(3.4,6.7),f2(23.4,7.8),f3;
    f1.display();
    f2.display();
    f3=f1+f2;
    f3.display();

    return 0;
}