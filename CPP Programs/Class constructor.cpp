#include<iostream>
using namespace std;

class A
{
private:
    int i;
public:
    A(int x)
    {
        i=x;
        cout<<"constructor A with args called!!\n";
    }
    A()
    {
        i=10;
        cout<<"constructor A without args called!!\n";
    }
    int geti()
    {
        return i;
    }
};
class C
{
private:
    int K;
public:
    C(int x)
    {
        K=x;
        cout<<"constructor C with args called!!\n";
    }
    int getK()
    {
        return K;
    }

};
class B: public A,public C
{
private:
    int j;
public:
    B():A(100),C(200)
    {
        j=20;
    }
    void add()
    {
        cout<<geti()+getK()+j<<endl;
    }
};
int main()
{
    B ob;
    ob.add();
    return(0);
}
