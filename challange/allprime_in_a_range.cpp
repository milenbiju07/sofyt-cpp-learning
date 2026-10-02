#include <iostream>
using namespace std;

int main() {
	long long start, end;
	cout << "Enter the range (start and end): ";
	cin >> start >> end;

	if (start > end) {
		swap(start, end);
	}

	bool foundPrime = false;
	for (long long number = start; number <= end; ++number) {
		if (number < 2) {
			continue;
		}

		bool isPrime = true;
		for (long long divisor = 2; divisor <= number / divisor; ++divisor) {
			if (number % divisor == 0) {
				isPrime = false;
				break;
			}
		}

		if (isPrime) {
			cout << number << ' ';
			foundPrime = true;
		}
	}

	if (!foundPrime) {
		cout << "No prime numbers in this range.";
	}
	cout << endl;

	return 0;
}
