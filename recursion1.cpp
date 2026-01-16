#include <iostream>
using namespace std;

void printNums(int n){

  if(n==1){
    cout<<"1\n";
    return;
  }

  cout<<n<<" ";
  printNums(n-1);
}

int fact_rec(int n){
  if(n==0){
    return 1;

  }

return n* fact_rec(n-1);
}

int main(){


cout<<fact_rec(5)<<endl;
  return 0;
}
