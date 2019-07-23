#include<bits/stdc++.h>
using namespace std;

double T[100][100];
double a=1,b=2,n;

double func(double x)
{
    return(1.0/x);
}

double trapezoidal(int n)
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
        else
        {
            sum=sum+2*func(a+i*h);
        }
    }
    return ((h/2)*sum);

}

void Romberge(int n)
{

   for(int i=1;i<=n;i++)
   {
      for(int j=0;j<i;j++)
      {
         if(j==0)
            T[i][j]=trapezoidal(pow(2,(i-1))); ///i means number of segment to pass each time
         else
            T[i][j]=( (pow(4,j)*T[i][j-1])-(T[i-1][j-1]) )/(pow(4,j)-1);
      }
   }
}

void Display(int n)
{
   cout<<"Result is :"<<endl;
   for(int i=1;i<=n;i++)
   {
      for(int j=0;j<i;j++)
       {
         cout<<fixed<<setprecision(6)<<T[i][j]<<"  ";
       }
      cout<<endl;
   }
}


int main()
{
    cout<<"Enter the value n :"<<endl;
    cin>>n;

    Romberge(n);
    Display(n);
    return 0;
}
