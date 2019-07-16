#include<iostream>
#include<cmath>
using namespace std;

class Bisection
{
public:
    double error=0.00001;
    int max_Iteration;
    double c;
    double func(double x)
    {
        return x*x-4*x-10;
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
            c=((a+b)/2); //Find Middle Point
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
            cout<<"Iteration"<<max_Iteration<<"a:"<<a<<"  b:"<<b<<" root:"<<c<<" f(c):"<<" "<<func(c)<<endl;
            max_Iteration++;
        }
    }
};

int main()
{
    Bisection obj;
    obj.findRoot(-2,-1);
    return 0;
}
