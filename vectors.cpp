#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4};
    cout << vec[0];

    vector<int> vec50(5, 0);
    for (int i:vec50){
        cout<<i<<endl;
    }

    vector<char> vecchar={'a','b','c','d','e','f','g','h'};
    vecchar.push_back('i');
    

    for(char val:vecchar){
        cout<<val<<endl;
    }

    cout<<"size="<<vecchar.size()<<endl;
    cout<<"capacity="<<vecchar.capacity()<<endl;
     
    cout<<vecchar.front()<<endl;
    cout<<vecchar.back()<<endl;
    cout<<vecchar.at(6)<<endl;


    return 0;
}