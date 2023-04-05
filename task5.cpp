#include <iostream>
using namespace std;
int triangle(int num);
main()
{
    int number;
    cout << "Enter number: ";
    cin >> number;
cout<<"Number of Dots: "<<triangle(number)<<endl;
}
int triangle(int num)
{
    int y = 1, number = 0;
    for ( int x = 1; x <= num; x++)
    {
        number = number + y;
        y = y + 1;
    }
    return number;
}