#include <bits/stdc++.h>
using namespace std;
int main () {
	long long x;
	cin >> x;
	if (x>3) cout << x*x*x + 2*x*x + 5*x;
	if (x<1) cout << 5*x - 8;
	if ((x>=1) and (x<=3)) cout << x*x - 2*x + 4;
	return 0;
}
