#include<bits/stdc++.h>
#define E 0.000001
using namespace std;


double func(double x)
{
    return (sqrt(1 - x*x));
}

double trapezoidal(int n)
{
    double a = 0;
    double b = 1;
    double sum = 0,h;
    h=(b-a)/n;
    for(int i=0;i<=n;i++)
    {
        if(i==0 || i==n)
        {
            sum=sum+func(a+i*h);
        }
        else
        {
            sum=sum + 2*func(a+i*h);
        }
    }
    return ((h/2)*sum);
}

void Compute(int n)
{
    double pre_res = 0.0;
    double cur_res = 0.0;
    cur_res = trapezoidal(n);
    do
    {
    cout<<n<<" "<<cur_res<<endl;
    pre_res = cur_res;

    n = n + 5;
    cur_res = trapezoidal(n);
    }while(abs(cur_res - pre_res) > E);
}


int main()
{
    int n;

    cout<<"Enter the value n :"<<endl;
    cin>>n;

    Compute(n);

    return 0;
}
