#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;

    cout << "enter N: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    cout << "sum = " << sum << endl;
    return 0;
}