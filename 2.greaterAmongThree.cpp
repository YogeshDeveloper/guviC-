#include <iostream>
using namespace std;
int main()
{
    float a=0.0,b=0.0,c=0.0;
    cin>> a;
    cin>>b;
    cin>>c;
    if (a>b && a>c)
    {
        cout<<a;
    }
    else if(b>a&&b>c)
    {
        cout<<b;
    }
    else
    {
        cout<<c;
    }
    return 0;
}