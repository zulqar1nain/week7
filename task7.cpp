#include <iostream>
using namespace std;
void percent(int number);
main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    percent(number);
}

void percent(int number)
{
    int num, p1=0, p2=0, p3=0;
    for (int x = 1; x <= number; x++)
    {
        cout << "Enter number " << x << " :";
        cin >> num;
        if (num % 2 == 0)
        {
            p1++;
        }
        if(num%3==0){
            p2++;
        }
        if(num%4==0){
            p3++;
        }
    }
    float num1=number;
    cout<<"Percentage of P1 : "<<(p1/num1)*100<<" %"<<endl;
    cout<<"Percentage of P2 : "<<(p2/num1)*100<<" %"<<endl;
    cout<<"Percentage of P3 : "<<(p3/num1)*100<<" %"<<endl;
}