#include <iostream>
using namespace std;
float totalpercentage;
void printpercentage(int number);
main()
{
    int number;
    cout << "Enter your number: ";
    cin >> number;
    printpercentage(number);
}
void printpercentage(int number)
{
    float p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;
    float percentage;
    float p1percen, p2percen, p3percen, p4percen, p5percen;
    int range = 0;
    for (int count = 0; count < number; count++)
    {
        cout << "Enter number: ";
        cin >> range;
        if (range < 200)
        {
            p1++;
        }
        if (range >= 200 && range < 400)
        {
            p2++;
        }
        if (range >= 400 && range < 600)
        {
            p3++;
        }
        if (range > 600 && range < 800)
        {
            p4++;
        }
        if (range > 800 && range <= 1000)
        {
            p5++;
        }
    }
    p1percen = (p1 / number) * 100;
    cout << p1percen << endl;
    p2percen = (p2 / number) * 100;
    cout << p2percen << endl;
    p3percen = (p3 / number) * 100;
    cout << p3percen << endl;
    p4percen = (p4 / number) * 100;
    cout << p4percen << endl;
    p5percen = (p5 / number) * 100;
    cout << p5percen << endl;
}