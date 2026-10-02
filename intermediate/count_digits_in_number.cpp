#include <iostream>
using namespace std;

int main() {
    int n;
    int count = 0;

    cout << "enter N: ";
    cin >> n;

    if (n == 0) {
        count = 1;
    } else {
        if (n < 0) {
            n = -n;
        }

        while (n > 0) {
            n /= 10;
            count++;
        }
    }

    cout << "count of digits = " << count << endl;
    return 0;
}