#include <iostream>
using namespace std;
int digitSum(int number);
main()
{
  int number;
  cout<<"Enter Number: ";
  cin>>number;
  int b=digitSum(number);
  cout<<"Number is: " <<b;                         
}
int digitSum(int number)
{
   int sum=0;
   int a;
   while(number>0)
   {
    a=number%10;

    sum=sum+a;

    number=number/10;
   }
    return sum;
}