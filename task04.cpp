#include <iostream>
using namespace std;
int frequencychecker(int number, int digit);
main()
{
    int number, digit;
    cout << "Enter number: ";
    cin >> number;
    cout << "Enter digit: ";
    cin >> digit ;
    cout<< endl;

    int num = frequencychecker(number, digit);
    cout << "Number of digits: " << num;
}
int frequencychecker(int number, int digit)
{
    int count = 0;
    int a;
    while (number > 0)
    {
        a = number % 10;
        if (a == digit)
        {
            count = count + 1;
        }
        number = number / 10;
    }
    return count;
}