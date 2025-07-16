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
	cout << "after pattern  :" << num << endl;

	// triangle patterns

	//  *
	//  *  *
	//  *  *  *
	//  *  *  *  *

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			cout << " * ";
		}
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			cout << (i + 1) << "  ";
		}
		cout << endl;
	}
	char ch = 'A';
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			cout << ch << "  ";
		}
		ch = ch + 1;
		cout << endl;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j <= i + 1; j++)
		{
			cout << j << "  ";
		}
		cout << endl;
	}

	for (int i = 0; i < n; i++)
	{ // reverse triangle pattern
		for (int j = i + 1; j > 0; j--)
		{
			cout << j << "  ";
		}
		cout << endl;
	}

	int num1 = 1; // Floyd's triangle
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			cout << num1 << "  ";
			num1 = num1 + 1;
		}
		cout << endl;
	}

	int num2 = 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j > 0; j--) // reverse loop
		{
			cout << num2 << "  ";
			num2 = num2 + 1;
		}
		cout << endl;
	}

	char ch1 = 'A';
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			cout << ch1 << " ";
			ch1++;
		}
		cout << endl;
	}

	char ch2 = 'A';
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j > 0; j--) // reverse loop
		{
			cout << ch2 << " ";
			ch2++;
		}
		cout << endl;
	}

	// inverted triangle pattern

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "  ";
		}
		for (int j = 0; j < n - i; j++)
		{
			cout << (i + 1) << " ";
		}
		cout << endl;
	}
	char ch3 = 'A';
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "  ";
		}
		for (int j = 0; j < n - i; j++)
		{
			cout << (ch3) << " ";
		}
		ch3++;
		cout << endl;
	}
	// pyramid pattern
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			cout << " "; // spaces
		}
		for (int j = 1; j <= i + 1; j++)
		{
			cout << j; // numbers 1
		}
		for (int j = i; j >= 1; j--)
		{
			cout << j; // numbers 2
		}
		cout << endl;
	}

	// hollow diamond pattern
	for (int i = 0; i < n; i++)   //top
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			cout << " ";
		}
		cout << "*";

		if (i != 0){

			for(int j=0;j<2*i-1;j++){
				cout<<" ";
			}
			cout<<"*";
		}
		cout<<endl;
			
	}
//bottom
	for(int i=0;i<n-1;i++){
		for(int j=0;j<i+1;j++){
			cout<<" ";
		}
		cout<<"*";
		if(i != n-2){
			for(int j=0;j<2*(n-i)-5;j++)
			{
				cout<<" ";

			}
			cout<<'*';
		}
		cout<<endl;
		
	}

for(int i=0;i<n;i++){
	for(int j=0;j<i+1;j++){
		cout<<"*";
	}
	for(int j=0;j<n-i-1;j++){
		cout<<" ";
	}
	for(int j=0;j<n-i-1;j++){
		cout<<" ";
	}
	for(int j=0;j<i+1;j++){
		cout<<"*";
	}
	cout<<endl;
}
for(int i=0;i<n;i++){
	for(int j=0;j<(n-i);j++){
		cout<<"*";
	}
	for(int j=0 ;j<2*i;j++){
		cout<<" ";
	}
	for(int j=0;j<(n-i);j++){
		cout<<"*";
	}

	cout<<endl;
}


	return 0;
}