#include <iostream>
using namespace std;


int main() {
	int a;
	int arr[3] = { 0 };
	int min = 1000000;
	int max = 0;
	int mid = 0;


	for (int i = 0; i < 3; i++) {
		cin >> a;
		arr[i] = a;
	}

	for (int j = 0; j < 3; j++) {
		if (arr[j] < min) {
			min = arr[j];
		}
	}
	
	for (int k = 0; k < 3; k++) {
		if (arr[k] > max) {
			max = arr[k];
		}
	}

	for (int t = 0; t < 3; t++) {
		if (arr[t] != min && arr[t] != max) {
			mid = arr[t];
		}
	}

	cout << min << ' ' << mid << ' ' << max;

}
