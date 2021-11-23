#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int c = 1;
	while (1) {
		cin >> c;
		if (!c) {
			break;
		}
		int m = c+1;
		int M = 2 * c;
		int cnt = 0;
		for (; m <= M; m++) {
			int root = sqrt(m);
			
			
			if (root == 1 && m != 1) {
				cnt++;
				continue;
			}
			if (m % 2) {
				for (int j = 2; j <= root; j++) {
					
					if (!(m % j))
						break;
			
					if (j == root) {
						cnt++;
					}
				}
			}
		}
		cout << cnt << '\n';
	}
}