#include<iostream>
using namespace std;

class  CircularQueue{

  int * arr;
  int currSize,cap;
  int f ,r;


  public:
  CircularQueue(int size){
    cap=size;
    currSize=0;
    arr=new int [cap];
    f=0 ;
    r=-1;

  }

  void push(int data){
    if(currSize==cap){
      cout<<"CQ is FULL";
      return;
    }

    r=(r+1)%cap;
    arr[r]=data;
    currSize++;

  }

  void pop(){
    if(empty()){
      cout<<"CQ is empty";
      return;
    }
    f=(f+1)%cap;
    currSize--;

  }

  int front(){
    if(empty()){
      cout<<"Cq is empty";
      return -1;
    }
    return arr[f];

  }

  bool empty(){
    return currSize==0;
  }

  void printArray(){
    for(int i=0 ;i<cap;i++){
      cout<<arr[i]<<" ";

    }
    cout<<endl;
  }

};


int main(){
  CircularQueue cq(3);
  cq.push(1);
  cq.push(2);
  cq.push(3);
  
  cq.pop();
  cq.push(4);
  cq.printArray();
 

  while(!cq.empty()){
    cout<<cq.front()<<" ";
    cq.pop();

  }

  cout<<endl;

   cout<<cq.front();





  return 0;
}

