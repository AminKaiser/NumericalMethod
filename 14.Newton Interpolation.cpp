#include<bits/stdc++.h>
using namespace std;
double x[100],f[100];

double func1(int start,int end)
{
        if(start == end)
            return f[start];

        if(start+1 == end)
        {
                return ((f[end]-f[start])/(x[end]-x[start]));
        }
        return (func1(start+1,end) - func1(start,end-1) )/(x[end]-x[start]);
}



double func2(int i,double value)
{
        double mul =1;
        for(int j=0; j<i; j++)
        {
                mul = mul * (value-x[j]);
        }
        return mul;
}

int main()
{
    int n;
    double value,funcx;
    freopen("in.txt","r",stdin);
    cout<<"Enter the Number of Elements :"<<endl;
    cin>>n;

    cout<<"Enter the Value of x axis "<<endl;
    for(int i = 0; i <n; i++)
    {
        cin>>x[i];
    }

    cout<<"Enter the Value of f(x) "<<endl;
    for(int i = 0; i <n; i++)
    {
        cin>>f[i];
    }

    cout<<"Enter the value of x ";
    cin>>value;

    for(int i=1;i<=n;i++)
    {
        funcx = funcx + (func1(0,i) * func2(i,value));
    }
    cout<<endl<<"Interpolated Function Value at "<<value<<"  is "<<funcx+f[0]<<endl;

    return 0;
}
