#include <iostream>
using namespace std;
float calculateprice(float money, int year);
main()
{
    float money;
    int year;
    cout << "Enter money: ";
    cin >> money;
    cout << "Enter year: ";
    cin >> year;
    float extramoney = calculateprice(money, year);
    if(extramoney>0)
    {
      cout<<"yes he will have careful life and will have"<<" " <<extramoney   <<" "<<"dollars left"  <<endl;  
    }
    if(extramoney<0)
    {
        extramoney*=-1;
        cout<<"He will need" <<" " <<extramoney << " " <<"dollars to survive"  <<endl;
    }
}
float calculateprice(float money, int year)
{
    int age=18; float normalyear=12000; int totalmoney;
    for (int count = 1800; count <= year; count++)
    {
        if (count % 2 == 0)
        {
            money-= 12000;
        }
        else
        {
        
            money -= (12000 + 50 * age);
        }
        age++;
    }
    totalmoney=money;
     return totalmoney;
}