#include <iostream>
using namespace std;
int main()
{
    int n;
    int original, reverse = 0;

    cout << "enter a number: ";
    cin >> n;

    original = n;

    while (n != 0) {
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n /= 10;
    }

    if (original == reverse) {
        cout << original << " is a palindrome." << endl;
    } else {
        cout << original << " is not a palindrome." << endl;
    }

    return 0;
}