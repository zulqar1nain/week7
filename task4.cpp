#include <iostream>
using namespace std;
void amplify(int num);
main()
{
    int num;
    cout << "Enter the number of sequence: ";
    cin >> num;
    amplify(num);
}
void amplify(int num)
{
    int x = 1;
    while (x <= num)
    {
        if (x % 4 == 0)
        {
            cout << 10 * x <<"," ;
        }
        else
        {
            cout << x<<",";
        }
        x++;
    }
}