// selection sort
#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void selectionSort(int arr[],int n){

    for(int i=0;i<n-1;i++){
        int smallestIdx=i;   //unsorted part starting
        for(int j=i+1;j<n;j++){
            if (arr[j]<arr[smallestIdx])
            {
                smallestIdx=j;
            }  
        }
        swap(arr[i],arr[smallestIdx]);
    }
}



int main(){
int arr[]={4,9,8,4,0};
int n=5;
selectionSort(arr,n);
printArray(arr,n);


    return 0;
}

