#include<iostream>
using namespace std;
int main()
{
    int a = 0;
    cin>>a;
    if (a=0)
    {
        cout<<"NULL";
    }
    else{
    for(int i=1;i<=3;i++)
    {
        cout<<a*i<< " ";
    }
     }
    return 0;
}