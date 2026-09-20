#include <iostream>
using namespace std;


int main() {
	int n;
	int result = 0;
	int min = 100;
	for (int i = 0; i < 7; i++) {
		cin >> n;

		if (n % 2 == 1) {
			result += n;
			if (n < min) {
				min = n;
			}
		}
	}

		if (result == 0) {
			cout << -1 << endl;
		}
		else {
			cout << result << endl;
			cout << min;
		}

}
