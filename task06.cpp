#include <iostream>
using namespace std;
int calculateGCD(int number1, int number2);
int calculateLCM(int number1, int number2, int num);
main()
{
    int number1 = 0, number2 = 0;
    cout << "Enter Number1: ";
    cin >> number1;
    cout << "Enter Number2 :";
    cin >> number2;
    int num = calculateGCD(number1, number2);
    int num1 = calculateLCM(number1, number2, num);
    cout << num << endl;
    cout << num1;
}
int calculateGCD(int number1, int number2)
{
    int n;
    for (int count = 1; count <= number2; count = count + 1)
    {
        int r1 = number1 % count;
        int r2 = number2 % count;

        if (r1 == 0 && r2 == 0)
        {
            n = count;
        }
    }
    return n;
}
int calculateLCM(int number1, int number2, int num)
{

    int b = (number1 * number2) / num;
    return b;
}