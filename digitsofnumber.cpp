#include <iostream>
using namespace std;

void printDigits(int n)
{
    int sum = 0;
    int count = 0;
    while (n != 0)
    {
        int digit = n % 10;
        count++;
        sum += digit;
        cout << digit << endl;
        n = n / 10;
    }
    cout << "Count of Digit : " << count << endl;
    cout << "Sum of Digit : " << sum << endl;
}

int main()
{

    int n = 3568;
    printDigits(n);
    return 0;
}

//k