#include<bits/stdc++.h>
#define E 0.000001
using namespace std;

class Secant
{
public:
    double func(double x)
    {
        return (3*x - cos(x) -1);
    }
    double Root(double x0, double x1)
    {
        double x;
        while(abs(func(x)) >= E)
        {
            x = x1 - ((func(x1) * (x1 - x0))/(func(x1) - func(x0)));
            x0 = x1;
            x1 = x;
            cout<<x<<endl;
        }
        cout<<fixed<<setprecision(4);
        cout<<"Root is : "<< x;
    }
};

int main()
{
    Secant obj;
    obj.Root(4,2);
}
