#include <iostream>
using namespace std;
void calculate(int num);
main()
{
    int numofdays, x = 1;
    cout << "Enter number of Days: ";
    cin >> numofdays;

    calculate(numofdays);
}

void calculate(int num)
{
    int doctor = 7, numofpatient, treated = 0, untreated = 0;
    for (int y = 1; y <= num; y++)
    {
        cout << "Enter num of Patient of Day" << y << "= ";
        cin >> numofpatient;
        if (y % 3 == 0)
        {
            if (treated < untreated)
            {
                doctor++;
            }
        }
        if (doctor >= numofpatient)
        {
            if (doctor == numofpatient)
            {
                treated = treated + doctor;
            }
            else 
            {
                treated = treated + numofpatient;
            }
        }
        else
        {
            treated=treated+doctor;
            untreated = untreated + (numofpatient - doctor);
        }
    }
    cout << "Treated Patient: " << treated << endl;
    cout << "Untreated Patient: " << untreated << endl;
}