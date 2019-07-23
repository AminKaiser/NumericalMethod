#include<bits/stdc++.h>
using namespace std;

double x[100],f[100];

int n;

double numeritor(int i, double value)
{
  double mul = 1;
  for(int j = 1; j <= n; j++)
  {
      if(j != i)
      {
          mul = mul * (value - x[j]);
      }
  }
  return mul;
}

double denominator(int i)
{
  double mul = 1;
  for(int j = 1; j <= n; j++)
  {
      if(j != i)
      {
          mul = mul * (x[i] - x[j]);
      }
  }
  return mul;
}

double Lagrange(double value)
{
    double sum;
    for(int i = 1; i<=n; i++)
    {
    sum = sum + (f[i] * ((numeritor(i,value)) / denominator(i)));
    }

    return sum;
}

int main()
{
    double value;
    freopen("in.txt","r",stdin);
    cout<<"Enter the Number of Elements :"<<endl;
    cin>>n;

    cout<<"Enter the Value of x axis "<<endl;
    for(int i = 1; i <=n; i++)
    {
        cin>>x[i];
    }

    cout<<"Enter the Value of f(x) "<<endl;
    for(int i = 1; i <=n; i++)
    {
        cin>>f[i];
    }

    cout<<"Enter the value of x ";
    cin>>value;

    cout<<endl<<"Result is : "<<Lagrange(value);
    return 0;
}
