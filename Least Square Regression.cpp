#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n;
    cout<<"Enter the no. of data pairs to be entered";
    cin>>n;
    double x[n],y[n],a,b;
    double xsum=0,ysum=0,xysum=0,x2sum=0;
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
        xsum=xsum+x[i];
        ysum=ysum+y[i];
        xysum=xysum+(x[i]*y[i]);
        x2sum=x2sum+pow(x[i],2);
    }
    b=(n*xysum-(xsum*ysum))/((n*x2sum)-(xsum*xsum));
    a=(ysum-b*xsum)/n;
    cout<<"y= "<<a<<"+"<<b<<"x"<<endl;
    return 0;
}
