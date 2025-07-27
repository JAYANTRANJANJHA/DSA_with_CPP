#include <iostream>
using namespace std;
// * => defrefrence operator

void changeA(int* ptr){
    *ptr=20;
}
int main()
{
    int a = 10;
    cout << "address of a : " << &a << endl;
    int *ptr = &a;
    int **parptr = &ptr;
    cout << "ptr (adress of ptr): " << &ptr << endl;
    cout << "ptr (adress of ptr): " << parptr << endl;
    cout << "ptr (adress of a): " << *parptr << endl;
    cout << "ptr (value  of a): " << **parptr << endl;

    cout << "ptr (adress of a): " << ptr << endl;
    cout << "ptr (value of a): " << *ptr << endl;
    cout << "ptr (adress of ptr): " << &ptr << endl;

    float price = 100.30;
    float *ptr1 = &price;
    cout << "ptr1 (adress of price): " << ptr1 << endl;
    cout << "adress of price: " << &price << endl;

    int *ptrnull = NULL;
    int *ptrgarbage;

    cout << ptrnull << endl;
    cout << ptrgarbage << endl;


    int a1=10;
changeA(&a1);
cout<<"inside main function : "<<a1<<endl;


int arr[]={1,2,3,4,5}; //constant pointer
 

    return 0;
}
