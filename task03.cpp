#include <iostream>
using namespace std;
int totaldigit(int number);
main()
{
  int number;
  cout<<"Enter number: ";
  cin>>number;
  int num=totaldigit(number);
  cout<<" "<<num  <<endl; 
}
int totaldigit(int number)
{
    int n=0;
   while(number>0)
   {
     number=number/10;
     n=n+1;
   }
   return n;
}