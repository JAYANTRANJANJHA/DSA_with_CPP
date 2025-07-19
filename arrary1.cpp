// array data structures
//  same type of data type
// linear
// contiguous memory allocation
#include <iostream>
#include <climits> // Required for __INT_MIN__
using namespace std;

void reverseArray(int arr[], int sz)
{
    int start = 0, end = sz - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int linearsearch(int arr[], int sizeofarrlin, int target)
{

    for (int i = 0; i < sizeofarrlin; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1; // not found here
}

int main()
{
    int sizeofmarks=5;
    int marks[sizeofmarks]={0};
    double price[]={99.89,105.67,30.00};
    // int sizeofmarks = sizeof(marks) / sizeof(int);
    cout<<"size of marks : "<<sizeof(marks)<<endl;
    // cout<<"enter array elements";
    // for(int i=0 ;i<sizeofmarks;i++){
    //     cin>>marks[i];
    // }
    cout<<"your array is: \n";
    for(int i=0;i<sizeofmarks;i++){
        cout<<marks[i]<<endl;
    }

    int smallest = INT_MAX;
    int largest = INT_MIN;
    int numsarr[] = {91, 25, -36, -4, 50};
    int size = sizeof(numsarr) / sizeof(int);
    int smallestindex=-1;
    int largestindex=-1;
    for (int i = 0; i < size; i++)
    {
        if (numsarr[i] < smallest)
        {
            smallest = numsarr[i];
            smallestindex=i;
        }
        if (numsarr[i] > largest)
        {
            largest = numsarr[i];
            largestindex=i;
        }
        // alternate way instead of if statement:
        // smallest=min(nums[i],smallest);
    }
    cout << "Smallest Number in Array is = " << smallest <<" is Indexed at : "<<smallestindex <<endl;
    cout << "Largest Number in Array is = " << largest <<" is Indexed at : "<< largestindex<< endl;

        int arrlin []= {4, 2, 7, 8, 1, 2, 5};
        int sizeofarrlin = sizeof(arrlin) / sizeof(int);
        int target = 8;
       cout<<"index of target is: " << linearsearch(arrlin, sizeofarrlin, target)<<endl;

    int arrrev[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
     int sz = 10;
    reverseArray(arrrev, sz);
    for(int i=0;i<sz;i++){
        cout<<arrrev[i]<<" ";
    }
    cout<<endl;
    return 0;
}
