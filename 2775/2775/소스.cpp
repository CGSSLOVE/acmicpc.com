#include <iostream>
using namespace std;

int hamsu(int a, int b) {
    int k = 0;
    if (a == 0) {
        return b;
    }
    for (int i = 1; i <= b; i++) {
        k += hamsu(a - 1, i);
    }
    return k;
}
int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int k, n, T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> k;
        cin >> n;
        cout << hamsu(k, n) << "\n";
    }


}


