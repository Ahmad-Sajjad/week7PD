#include <iostream>
using namespace std;
bool isPrime(int num);
main()
{
    int num;
    cout << "Enter Number: ";
    cin >> num;
    cout << isPrime(num);
}
bool isPrime(int num)
{
    int count = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}