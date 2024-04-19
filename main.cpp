#include <iostream>
using namespace std;

int main()
{
    /*int num = 10;
    int *ptr = &num;
    cout << "------" << endl;
    cout << &num << endl ;
    cout << *ptr;*/

    int arr[5] = {1,2,3,4,5};
    int *ptr = arr;// &arr[0]

    cout << arr << endl;
    cout << *ptr << endl;
}