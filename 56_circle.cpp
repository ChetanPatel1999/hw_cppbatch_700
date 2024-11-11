#include <iostream>
using namespace std;
class circle
{
    float radius;
    float area;
    float circumferance;

public:
    void setradius(float);
    void calculate_area();
    void calculate_circum();
};

void circle::setradius(float r)
{
    radius = r;
}
void circle::calculate_area()
{
    float pi = 3.141;
    area = pi * radius * radius;
    cout << "area of circle which radius " << radius << " = " << area << endl;
}
void circle::calculate_circum()
{
    float pi = 3.141;
    circumferance = 2 * pi * radius;
    cout << "circumference  of circle which radius " << radius << " = " << circumferance << endl;
}
int main()
{
    circle c1, c2;
    c1.setradius(5.4);
    c2.setradius(8);
    c1.calculate_area();
    c2.calculate_area();
    c1.calculate_circum();
    c2.calculate_circum();
    return 0;
}