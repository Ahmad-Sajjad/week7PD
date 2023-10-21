#include <iostream>
using namespace std;
int triangle(int numOfTriangle);
main()
{
    int numOfTriangles;
    cout << "Enter number of Triangle: ";
    cin >> numOfTriangles;
    cout <<"Dots in the Triangle: "<< triangle(numOfTriangles);
}
int triangle(int numOfTriangle)
{
    int sum = 0;
    for (int i = 1; i <= numOfTriangle; i++)
    {
        sum = sum + i;
    }
    return sum;
}