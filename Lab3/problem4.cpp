// 4.Write a function that gets radius of a circle and returns area.
#include <iostream>
using namespace std;
float circle(float r)
{
    float area;
    float p = 3.1416;
    area = p * (r * r);
    return area;
}
int main()
{
    float r;
    cin >> r;
    cout << "Circle : " << circle(r) << endl;

    return 0;
}