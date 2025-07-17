#include <iostream>
using namespace std;
int printHello()
{
    cout << "hello\n";
    return 3;
}

int sum(int a, int b)
{
    int s = a + b;
    return s;
}

int minimumof2(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    cout << printHello() << endl;
    cout << sum(10, 5) << endl;
    cout << sum(40, 30) << endl;
    cout << "Minimum of 2 is : " << minimumof2(50, 40) << endl;

    return 0;
}