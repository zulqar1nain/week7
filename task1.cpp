#include <iostream>
using namespace std;
void nested(int rows);
main()
{
   int rows;
   cout<<"Enter rows: ";
   cin>>rows;
   nested(rows);
}
void nested(int rows)
{
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

