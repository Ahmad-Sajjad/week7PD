#include <iostream>
#include <iomanip>
using namespace std;
void cargo(int count);
main()
{
    int count;
    cout << "Enter the count of cargo for transportation: ";
    cin >> count;
    cargo(count);
}
void cargo(int count)
{
    int ton, totalTons;
    float minbus = 0;
    float truck = 0;
    float train = 0;

    float miniBusPercent, truckPercent, trainPercent, avg;
    for (int i = 1; i <= count; i++)
    {
        cout << "Enter the tonnage of cargo " << i << ": ";
        cin >> ton;
        if (ton <= 3)
        {
            minbus = minbus + ton;
        }
        if (ton > 3 && ton <= 11)
        {

            truck = truck + ton;
        }
        if (ton > 11)
        {
            train = train + ton;
        }
    }
    totalTons = train + truck + minbus;
    miniBusPercent = (minbus / totalTons) * 100;
    truckPercent = (truck / totalTons) * 100;
    trainPercent = (train / totalTons) * 100;
    avg = (minbus * 200 + truck * 175 + train * 120) / totalTons;
    cout << fixed << setprecision(2) << avg << endl;
    cout << fixed << setprecision(2) << miniBusPercent << "%" << endl;
    cout << fixed << setprecision(2) << truckPercent << "%" << endl;
    cout << fixed << setprecision(2) << trainPercent << "%";
}