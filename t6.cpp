#include <iostream>
using namespace std;
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
void primorial(int num);
main()
{
    int num;
    cout << "Enter Number: ";
    cin >> num;
    primorial(num);
}
void primorial(int num)
{
    int total = 1;
    int count = 0;
    int i = 1;
    while (count < num)
    {
        if (isPrime(i))
        {
            count++;
            total = total * i;
        }
        i++;
    }

    cout << total;
}