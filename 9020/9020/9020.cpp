#include<iostream>
#include <cmath>
using namespace std;
int hamsu(int a) {
	int b = 2;
	bool flag = false;

	while (b != a && (int)sqrt(a) >= b) {

		if (a == 1) {
			flag = true;
			break;
		}

		if (a % b == 0) {
			flag = true;
			break;
		}

		b++;

	}
	if (flag == true) {
		return 1;
	}
	if (flag == false) {
		return 2;
	}


}

//int hamsu1(int a,int n) {
//	int b = 2;
//	bool flag = false;
//
//	while (b != a && (int)sqrt(a) >= b) {
//
//		if (a == 1) {
//			flag = true;
//			break;
//		}
//
//		if (a % b == 0) {
//			flag = true;
//			break;
//		}
//
//		b++;
//
//	}
//	
//	if (flag == false && hamsu(n-a) == true) {
//		cout << n - a << " " << a << "\n";
//	}
//	
//}

int main() {


	int T;
	cin >> T;
	bool sosu[10004] = { false };
	for (int i = 0; i < T; i++) {

		int n;
		cin >> n;
		int a = n / 2;


		while (1) {

			if (hamsu(a) == 1) {
				a++;
			}
			else {
				if (hamsu(n - a) == 1) {
					a++;
					continue;
				}
				else {
					cout << n - a << " " << a << "\n";
					break;
				}
			}


		}
	}
}

