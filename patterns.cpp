#include <iostream>
using namespace std;

int main()
{
	int n = 4;

	for (int i = 1; i <= n; i++) // square of stars
	{
		for (int j = 1; j <= n; j++)
		{
			cout << " * ";
		}

		cout << endl;
	}

	for (int i = 1; i <= n; i++) // square with 1 2 3 4
	{
		for (int j = 1; j <= n; j++)
		{
			cout << j << " ";
		}

		cout << endl;
	}

	for (int i = 0; i < n; i++) // outer loop
	{
		char ch = 'A';
		for (int j = 0; j < n; j++) // inner loop a new line start
		{
			cout << ch << " "; // square pattern with A B C D
			ch = ch + 1;	   // 65+1=66
		}

		cout << endl;
	}

	int num = 1; // square pattern 1 to N
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << num << "   ";
			num = num + 1;
		}
		cout << endl;
	}
	cout << "after pattern  :" << num<< endl;

	
	
		// triangle patterns
		for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i + 1; j++){
			cout<<" * ";

		}
		cout<<endl;
	}

	return 0;
}