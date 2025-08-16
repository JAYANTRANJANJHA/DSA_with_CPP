// euclid algorithm
#include <iostream>
using namespace std;



int gcd(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    if (a==0) return b;
    return a;
}

int lcm(int a,int b){
    int gcdforlcm=gcd(a,b);
    return(a*b)/gcdforlcm;

}

int main()
{
    cout<<"GCD is : "<<gcd(20,28)<<endl;
    cout<<"LCM is : "<<lcm(20,40)<<endl;


    return 0;
}
