#include <iostream>
using namespace std;

int main()
{

  string str = "1234567890";
  string str_even = "";
  string str_odd = "";
  for (int i = 0; i < str.length(); i++)
  {
    if (i % 2 == 0)
    {
      str_even += str[i];
    }
    else
    {
      str_odd += str[i];
    }
  }
  cout << str_even + str_odd;
  return 0;
}