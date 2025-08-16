#include <iostream>
using namespace std;

bool isArmstrong(int n){
    int copyn=n;
    int sumofcubes=0;
    while(n!=0){
        int dig=n%10;
        sumofcubes+=(dig*dig*dig);
        n=n/10;
    }
    return sumofcubes==copyn;


}

int main(){
    int n=153;
    if(isArmstrong(n)){
        cout<<n<<" is Armstrong Number"<<endl;
    }else{
        cout<<n<<" is not Armstrong Number"<<endl;
    }


    return 0;
}