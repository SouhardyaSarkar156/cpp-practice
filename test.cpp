#include <iostream>
using namespace std;

int digitalroot(int n) {
    int i = 0;
    
    if (i < 10) {
        return i;
    }
    else {
        while(n >=0) {
            i += n%10;
             n /= 10;
         }
     }

    return digitalroot(i);

}

int main() {
    int n;
    
    cout << "Input : ";
    cin >> n ;

    cout <<endl << digitalroot(n);

}