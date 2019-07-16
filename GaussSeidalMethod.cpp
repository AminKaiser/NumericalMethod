#include<bits/stdc++.h>
using namespace std;

double arr[100][100],x[100] = {0};

void GaussSeidal(int n, int t)
{
 while(t > 0)
 {
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
        x[i] = sum;
     }
     t--;
 }
}

void display(int n)
{
    for(int i = 1; i<= n; i++)
    {
        cout<<x[i]<<" ";
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

    GaussSeidal(n,t);
    display(n);
    return 0;
}


