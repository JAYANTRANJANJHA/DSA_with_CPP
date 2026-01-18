#include <iostream>
#include <unordered_set>
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

  string str1 = "enjoy cold weather";
  cout << " \ndo not " + str1 << endl;

  string str_1 = "12345";
  string str_2 = "10101";
  string new_str = "";

  for (int i = 0; i < str_1.length(); i++)
  {
    if (str_2[i] == '1')
    {
      new_str += str_1[i];
    }
  }

  cout << new_str << endl;

  string target = "communication";
  string ref = "com";

  unordered_set<char> refset(ref.begin(), ref.end());
  string ans = "";
  for (char ch : target)
  {
    if (refset.find(ch) == refset.end())
    {
      ans += ch;
    }
    
  }
  cout << ans<<endl;;

  return 0;
}