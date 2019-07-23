#include<bits/stdc++.h>
void display(int n);
using namespace std;

double arr[100][100],x[100] = {0},a[100] = {0};

void Jaccobi(int n, int t)
{
cout<<"iteration \t x[0] \t x[1] \t x[2]"<<endl;
 for(int m = 1; m <= t; m++)
 {
     for(int k = 1; k<= n; k++)
        x[k] = a[k];
     for(int i = 1; i<= n; i++)
     {
         double sum =0;
         for(int j = 1; j<= n; j++)
         {
             if(i != j)
             {
                 sum = sum + arr[i][j] * x[j];
             }
         }

        sum = (arr[i][n+1] - sum);
        sum = sum / arr[i][i];
        if(abs((sum-x[i])/sum)<=0.0000000001)
            {
                display(n);
                break;
            }
        a[i] = sum;
     }
     cout<<"\t"<<m<<"\t";
        for(int i=1;i<=n;i++)
            cout<<x[i]<<"\t";
            cout<<endl;
 }
}

void display(int n)
{
    cout<<"Result : \t";
    for(int i = 1; i<= n; i++)
    {
        cout<< x[i]<<"\t";
    }
}

int main()
{
    int n,t,i,j;
    freopen("in.txt","r",stdin);

    cout<<"Enter the value of n :"<<endl;
    cin>>n;
    cout<<"Enter the Iteration No :"<<endl;
    cin>>t;
    cout<<"Enter the Equations "<<endl;
    for(i = 1; i<=n; i++)
    {
        for(j = 1; j<=n+1; j++)
        {
            cin>>arr[i][j];
        }
    }

    Jaccobi(n,t);
    display(n);
    return 0;
}
