#include<bits/stdc++.h>
#define E 0.00001
using namespace std;

double Func(double x)
{
    return x*x - 3*x + 2;
}

double DeriveFunc(double x)
{
    return 2*x - 3;
}
void Newton_Raphson(double x)
{
    double h;
    while(Func(x) >= E)
    {
        h = Func(x) / DeriveFunc(x);
        x = x - h;
        //x = x - (Func(x) / DeriveFunc(x));
    }
    cout<<x;
}

int main()
{
    double x0 = 0;
    Newton_Raphson(x0);
    return 0;
}
