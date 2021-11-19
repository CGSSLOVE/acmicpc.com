#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		int a;
		int b = 2;
		bool flag=false;

		cin >> a;
		while (b != a) {
			
			if (a == 1) {
				flag = true;
				break;
			}
			if (flag == true) {
				break;
			}
			if (a % b == 0) {
				flag = true;
			}
			
			b++;

		}
		if (flag == false) {
			cnt++;
		}
	}
	cout << cnt;
}