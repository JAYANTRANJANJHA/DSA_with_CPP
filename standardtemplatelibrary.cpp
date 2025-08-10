#include <iostream>
#include<vector>
#include <list>
#include<deque>
#include<stack>

using namespace std;

int main(){

    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    
    cout<<"top : "<<s.top()<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    

    cout<<endl;


    pair<int,pair<int,int>> p={10,{20,30}};
    cout<<p.first<<endl;
    cout<<p.second.first<<endl;
    cout<<p.second.second<<endl;

    vector<pair<int,int>>vecpair={{1,2},{2,3},{3,4}};
    vecpair.push_back({4,5});
    vecpair.emplace_back(5,6);
    for( auto pp:vecpair){
        cout<<pp.first<<" "<< pp.second<<endl;
    }




    deque<int> dq;

    list<int> l;

    l.push_back(1);
    l.push_back(2);
    l.emplace_back(3);
    l.push_front(0);
    l.push_front(-1);

    for(int val : l){
        cout<<val<<" ";
    }











    vector<int> vec={1,2,3,4,5};

    // vec.push_back(1);
    // vec.push_back(2);
    // vec.push_back(3);
    // vec.push_back(4);
    // vec.push_back(5);
    // vec.push_back(6);
    // vec.pop_back();


    cout<<"Vector Size"<<vec.size();
    cout<<endl;
    for(int val:vec){
        cout<<val<<"  ";
    }
    // cout<<vec[2]<<endl;
    // cout<<vec.at(2)<<endl;
    // cout<<vec.front()<<endl;
    cout<<vec.back()<<endl;

    for(auto it=vec.begin(); it!=vec.end();it++ ){
        cout<<*(it)<<" ";
    }


    return 0;
}