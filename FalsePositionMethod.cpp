//Regular Falsi Method
#include<iostream>
using namespace std;

class FalsePosition
{
public:
    int max_Iteration=10;
    double c;
    double func(double x)
    {
        return x*x-4*x-10;
    }
    // Prints root of func(x) in interval [a, b]
    void findRoot(double a, double b)
    {
        if(func(a)*func(b)>=0)
        {
            cout<<"Please Enter Correct Value of a & b :";
            return;
        }

        for(int i=0;i<max_Iteration;i++)
        {
            // Find the point that touches x axis
            c = (a*func(b) - b*func(a))/ (func(b) - func(a));
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

        }
    }


};
int main()
{
    FalsePosition obj;
    obj.findRoot(-2,-1);
    return 0;
}
