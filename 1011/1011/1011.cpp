#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		unsigned int x, y, d;
		cin >> x >> y;
		int a = 1;
		d = y - x;
		int cnt = 0;
		while (d / 2 >= a) {
			d -= a * 2;
			cnt += 2;
			a++;
		}
		if (d >= 1 && d <= a) {
			cnt++;
		}
		else if (a < d) {
			cnt += 2;
		}
		cout << cnt << "\n";


	}
}