#include <iostream>
#include <vector>
using namespace std;

int main()
{

  vector<int> arr = {1, 2, 3, 4, 5, 6};

  int sum_odd=0;
  int sum_even=0;

  for (int i = 0; i < arr.size(); i++)
  {
    if (arr[i] % 2 == 0)
    {
      sum_even += arr[i];
    }
    else
    {
      sum_odd += arr[i];
    }
  }

  cout << "Sum of even numbers: " << sum_even << endl;

  cout << "Sum of Odd numbers : "<<sum_odd << endl;

  return 0;
}
