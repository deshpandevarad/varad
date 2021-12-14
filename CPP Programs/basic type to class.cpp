#include<iostream>
using namespace std;
class Time
{
private:
    int hour,main;
public:
    Time(int m)
    {
        hour=m/60;
        min=m%60;
    }
    void showtime()
    {
        cout<<hour<<":"<<min<<endl;
    }
};
int main()
{
    int x=100;
    Time.t1=x;
}
