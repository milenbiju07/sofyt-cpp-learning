#include <iostream>
using namespace std;

int main() {
	int terms;
	cout << "How many terms? ";
	cin >> terms;

	if (terms < 0 || terms > 93) {
		cout << "Enter a number of terms from 0 to 93." << endl;
		return 0;
	}

	long long first = 0;
	long long second = 1;

	for (int i = 0; i < terms; ++i) {
		cout << first;
		if (i < terms - 1) {
			cout << ' ';
		}

		long long next = first + second;
		first = second;
		second = next;
	}

	cout << endl;
	return 0;
}
