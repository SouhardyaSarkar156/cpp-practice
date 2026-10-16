#include <iostream>
using namespace std;

int main() {

    int arr[5];
    cout << "Enter 5 integers" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Element " << i+1 <<" : ";
        cin  >> arr[i];
    }

    cout << "The elements in this array are : " ;
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
}