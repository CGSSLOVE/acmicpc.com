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



		while (b != a && (int)sqrt(m) >= b) //���Ⱑ ���� �߿�. �ð� ���⵵ ������ ���� �񱳰� �ƴ�, ��Ʈ ���ؾ���.
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