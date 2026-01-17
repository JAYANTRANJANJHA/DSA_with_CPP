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

int nums_sum_rec(int n){

  if(n==1){
    return 1;
  }


return n+nums_sum_rec(n-1);

}

int fibo_rec(int n){ 
if(n==0){
  return 0;
}
if(n==1){
  return 1;
}

  return fibo_rec(n-1)+fibo_rec(n-2);

}

int main(){


cout<<fibo_rec(3)<<endl;
  return 0; 
}
