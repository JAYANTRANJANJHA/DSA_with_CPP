#include <iostream>
using namespace std;

int decToBinary(int decNum){
    int binNum=0 , pow =1;
    while(decNum>0){
        int rem=decNum%2;
        decNum/=2;
        binNum+=(rem*pow);
        pow*=10;
    }
    return  binNum;
}

int binToDecimal(int binNum){
    int decNum=0,pow=1;
    while(binNum>0){
        int rem=binNum%10;
        decNum+=rem*pow;
        binNum/=10;
        pow*=2;
    }
    return decNum;
}


int main(){
    int decNum=50;
    int binNum=110010;
   
     cout<<decToBinary(decNum)<<endl;

   cout<<binToDecimal(binNum)<<endl;

    return 0;
}
