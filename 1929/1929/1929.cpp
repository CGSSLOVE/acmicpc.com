#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int m, M;
	cin >> m >> M;

	for (; m <= M; m++) {
		int a = m;
		int b = 2;
		bool flag = false;



		while (b != a && (int)sqrt(m) >= b) //여기가 가장 중요. 시간 복잡도 때문에 전부 비교가 아닌, 루트 비교해야함.
		{ 

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
		if (flag == false&&m!=1) {
			cout << m << "\n";
		}
	}
}