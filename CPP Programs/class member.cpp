#include<iostream>
using namespace std;

class student
{
private:
    int id;
    string name;
public:
    void getdata();
    void showdata();
};
void student::getdata()
{
    cout<<"enter id and name\n";
    cin>>id>>name;
}
void student::showdata()
{
    cout<<id<<"\t"<<name<<endl;
}
int main()
{
    student students[3];
    int i;
    for(i=0;i<3;i++)
    {
        students[i].getdata();
    }
    cout<<"\n your data"<<endl;
    for(i=0;i<3;i++)
    {
        students[i].showdata();
    }
    return(0);
}
