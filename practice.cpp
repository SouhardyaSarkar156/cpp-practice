#include <iostream>
using namespace std;

int main(){
    int num;

    cout << "Enter the number of elements in array: ";
    cin >> num;

    int arr[num];

    for (int i=0; i<num; i++){
        cout << "Enter element: ";
        cin >> arr[i];
    }

    int rot;

    cout << "Enter the rotation value: ";
    cin >> rot;

    for (int i=0; i<rot; i++){
        int first=arr[0];
        for (int j=1; j<num; j++){
            arr[j-1]=arr[j];
        }
        arr[num-1]=first;
    }

    for (int i=0; i<num; i++){
        cout << arr[i] << " ";
    }

    return 0;
}