#include <iostream>
using namespace std;
string hospital(int days);
main()
{
    int days;
    cout << "Enter Number of days you visited Hospital: ";
    cin >> days;
    cout << hospital(days);
}
string hospital(int days)
{
    int num;
    int treatedPatients = 0;
    int untreated = 0;
    int doctors = 7;
    for (int i = 1; i <= days; i++)
    {
        cout << "Number of patients who visited hospital on Day " << i << ": ";
        cin >> num;
        if (i % 3 == 0 && (treatedPatients < untreated))
        {
            doctors++;
        }
        if (num <= doctors)
        {
            treatedPatients = treatedPatients + num;
        }
        else
        {
            treatedPatients = treatedPatients + doctors;
            untreated = untreated + (num - doctors);
        }
    }
    string st = "Treated patients: " + to_string(treatedPatients) + "\nUntreated patients: " + to_string(untreated);
    return st;
}
