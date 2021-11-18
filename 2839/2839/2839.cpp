#include <iostream>
using namespace std;

int main() {

	int N;
	cin >> N;
	int k = 0;
	while (N >= 0) {
		if (N % 5 == 0) {
			k += (N / 5);
			cout << k << "\n";
			return 0;
		}
		N -= 3;
		k++;



	}
	cout << "-1" << "\n";




}