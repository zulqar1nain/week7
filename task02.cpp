#include <iostream>
using namespace std;
main()
{
    int number,result;
    cout<<"Enter number: ";
    cin>>number;
    int n1=0;
    int n2=1;
    cout <<n1  <<","  <<n2  <<",";
    for(int count=1;  count<=number; count=count+1)
    {
    int result=n1+n2;
    cout <<result <<",";
    n1=n2;
    n2=result;
    }
}