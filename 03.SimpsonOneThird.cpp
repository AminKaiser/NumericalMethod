#include<bits/stdc++.h>
using namespace std;


double func(double x)
{
    return (sqrt(1 - x*x));
}

double trapezoidal(int n,double a, double b)
{
    int i;
    double sum = 0,h;
    h=(b-a)/n;
    for(int i=0;i<=n;i++)
    {
        if(i==0 || i==n)
        {
            sum=sum+func(a+i*h);
        }
        else if(i % 2 != 0)
        {
            sum=sum + 4*func(a+i*h);
        }
        else
        {
           sum=sum + 2*func(a+i*h);
        }

    }
    return ((h/3)*sum);

}


int main()
{
    int n;
    double a = 0;
    double b = 1;

    cout<<"Enter the value n :"<<endl;
    cin>>n;

    cout<<"Result is : "<<trapezoidal(n,a,b);

    return 0;
}
