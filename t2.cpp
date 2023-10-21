#include <iostream>
using namespace std;
void printHalfDiamond(int rows);
main()
{
    int rows;
    cout << "Enter desired number of rows: ";
    cin >> rows;
    printHalfDiamond(rows);
}
void printHalfDiamond(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout<<endl;
    }
    for (int i = rows; i >= 1; i--)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout<<endl;
    }
}