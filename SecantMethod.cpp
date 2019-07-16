#include<bits/stdc++.h>
#define E 0.0001
using namespace std;

class Secant
{
public:
    double func(double x)
    {
        return x*x - 4*x - 10;
    }
    double Root(double x0, double x1)
    {
        double x;
        while(abs(func(x1)) >= E)
        {
            x = x1 - ((func(x1) * (x1 - x0))/(func(x1) - func(x0)));
            x0 = x1;
            x1 = x;
            cout<<x<<endl;
        }
        cout.precision(4);
        cout.setf(ios::fixed);
        cout<<"Root is : "<< x;
    }
};

int main()
{
    Secant obj;
    obj.Root(4,2);
}
