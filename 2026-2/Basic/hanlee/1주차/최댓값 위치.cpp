#include <iostream>
using namespace std;


int main() {
	int n;
	int arr[9] = { 0 };
	int max = 0;
	int sign = 0;
	for (int i = 0; i < 9; i++) {
		cin >> n;
		arr[i] = n;
	}

	for (int j = 0; j < 9; j++) {
		if (arr[j] > max) {
			max = arr[j];
			sign = j+1;
		}
	}

	cout << max << endl << sign;

}
