// 3.Write a function that gets length and width of a rectangle and returns area.
#include <iostream>
using namespace std;
int reactanagle(int length, int width)
{
    int area = length * width;
    return area;
}
int main()
{
    int w, l;
    cin >> w >> l;
    cout << "Reactangle : " << reactanagle(w, l) << endl;

    return 0;
}