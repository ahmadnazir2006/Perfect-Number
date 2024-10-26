#include<iostream>
using namespace std;
int main() {
	int n, half, sum = 0;
	cout << "Enter the number\n";
	cin >> n;
	half = n / 2;
	for (int i = 1; i <= half; i++) {
		if (n % i == 0) {
			sum += i;
		}
	}
	if (sum == n) {
		cout << "The number is a Perfect number";

	}
	else { cout << "The number is not a Perfect number"; }
}