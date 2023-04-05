#include <iostream>
using namespace std;
void percentage(int num);
main()
{
    int num;
    cout << "Enter count of Cargo: ";
    cin >> num;
    percentage(num);
}
void percentage(int num)
{
    float number, mini = 0, mini_=0, truck = 0, truck_=0, train = 0, train_=0, num1 = 0;
    for (int x = 1; x <= num; x++)
    {
        cout << "Enter tonnage of " << x << " cargo : ";
        cin >> number;
        if (number <= 3)
        {
            mini = mini + number;
            mini_++;
        }
        else if (number > 3 && number <= 11)
        {
            truck = truck + number;
            truck_++;
        }
        else
        {
            train = train + number;
            train_++;
        }
        num1 = num1 + number;
    }
    cout<<num1;

    cout << "The Average price per ton: " << ((mini * 200) + (truck * 175) + (train * 120)) / num1 << endl;
    cout << "By minibus :" << (mini / num1) * 100 << " %" << endl;
    cout << "By Truck :" << (truck / num1) * 100 << " %" << endl;
    cout << "By Train :" << (train / num1) * 100 << " %" << endl;
}