#include <iostream>
using namespace std;
float calculatemoney(int age, float priceoftoy, float priceofmachine);
main()
{
    int age;
    float priceoftoy, priceofmachine;
    cout << "Enter Age: ";
    cin >> age;
    cout << "Enter price of machine: ";
    cin >> priceofmachine;
    cout << "Enter price of toy: ";
    cin >> priceoftoy;
    float ans=calculatemoney(age, priceoftoy, priceofmachine);
    if(ans>priceofmachine)
    {
        cout<<"yes!";
        ans-=priceofmachine;
        cout<<ans   <<endl;
    }
    else
    {
        cout<<"No!";
        priceofmachine-=ans;
        cout<<priceofmachine   <<endl;
    }
}
float calculatemoney(int age, float priceoftoy, float priceofmachine)
{
    int toys = 0;
    float total = 0;
    int birthmoney=10;
    for (int year = 1; year <= age; year++)
    {
        if (year % 2 == 0)
        {
            total = total + birthmoney;
            total = total - 1;
            birthmoney += 10;
        }
        else
        {
            toys++;
        }

    }

    int total_saved = toys * priceoftoy;
    total += total_saved;
    // savedmoney = savedmoney +pricet;

    return total;
}