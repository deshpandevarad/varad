#include<iostream>
using namespace std;

main()
{
    int a,b,c;
    cout<<"Enter 3 numbers";
    cin>>a;
    cin>>b;
    cin>>c;
    if (a>b&&a>c)
    {
        cout<<"A is max";
    }
    else if (b>a&&b>c)
    {
        cout<<"B is max";
    }
    else
    {
        cout<<"C is max";
    }
}
