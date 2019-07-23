#include<bits/stdc++.h>
using namespace std;

class Bisection
{
public:
    double error=0.00001;
    int max_Iteration;
    double c;
    double func(double x)
    {
        return (3*x - cos(x) -1);
    }
    void findRoot(double a, double b)
    {
        if(func(a)*func(b)>=0)
        {
            cout<<"Please Enter Correct Value of a & b :";
            return;
        }
        max_Iteration=1;
        while(abs(a-b)>=error && max_Iteration<=30)
        {
            c = (a*func(b) - b*func(a))/ (func(b) - func(a)); //Find Middle Point
            if(func(c)==0.0) //Check if middle point is Root
            {
                break;
            }
            if(func(a)*func(c)<0)
            {
                b=c;
                a=a;
            }
            else
            {
                a=c;
                b=b;
            }
            cout<< fixed << setprecision(4);
            cout<<"Iteration "<<max_Iteration<<"\ta:"<<a<<"\tb:"<<b<<"\troot:"<<c<<"\tf(c):"<<" "<<func(c)<<endl;
            max_Iteration++;
        }

        cout<<endl<<"Root is : "<<c;
    }
};

int main()
{
    Bisection obj;
    obj.findRoot(0,1);
    return 0;
}
