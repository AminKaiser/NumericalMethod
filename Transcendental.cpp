#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter the no. of data pairs to be entered";
    cin>>n;
    double x[n],y[n],a,b,lna;
    double sumlnx=0,sumlny=0,sumlnxy=0,sumlnx2=0;
    cout<<"Enter the x-axis values...";
    for(i=0;i<n;i++)
    {
        cin>>x[i];
    }
    cout<<"Enter the y-axis values...";
    for(i=0;i<n;i++)
    {
        cin>>y[i];
    }
    for(i=0;i<n;i++)
    {
        sumlnx=sumlnx+log(x[i]);
        sumlny=sumlny+log(y[i]);
        sumlnx2=sumlnx2+pow(log(x[i]),2);
        sumlnxy=sumlnxy+(log(x[i])* log(y[i]));

    }
    b=(n*sumlnxy-(sumlnx*sumlny))/((n*sumlnx2)-(sumlnx*sumlnx));
    lna =(sumlny-b*sumlnx)/n;
    a = exp(lna);

    cout<<"y= "<<a<<"x^"<<b<<endl;
    return 0;
}

