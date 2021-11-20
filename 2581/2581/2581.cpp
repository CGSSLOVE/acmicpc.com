#include <iostream>
using namespace std;

int main() {
	int m, M;
	cin >> m >> M;
	int cnt = 0;
	int add = 0;
	int save = 0;
	for (; m <= M; m++) {
		int a = m;
		int b = 2;
		bool flag = false;



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
			add += a;
			cnt++;
		}
		if (flag == false && cnt == 1) {
			save = a;
		}
	}
	if (add != 0) {
		cout << add << "\n";
		cout << save;
	}
	else {
		cout << "-1";
	}
}