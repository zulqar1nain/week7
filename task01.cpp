#include <iostream>
using namespace std;
void printtable(int number);
main()
{
    int number;
    cout << "enter number: ";
    cin >> number;
    printtable(number);
}
void printtable(int number)
{

    for (int count = 1; count <= 10; count = count + 1)
    {
        cout << number << "*" << count << "=" << number * count << endl;
    }
}