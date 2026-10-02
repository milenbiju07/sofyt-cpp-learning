#include <iostream>
using namespace std;
int main(){
    int n;
    int sum = 0;

    cout << "enter a number: ";
    cin >> n;

    while (n != 0) {
        int digit = n % 10;
        sum += digit;
        n /= 10;
    }

    cout << "sum of digits = " << sum << endl;
    return 0;
}