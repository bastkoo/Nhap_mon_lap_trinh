#include<bits/stdc++.h>
using namespace std;
int main()
{
	double x,k;
	cin >> x >> k;
	double c = sqrt(abs(x));
	double a = pow(c,4) + k*k*k;
	double f = pow(cos(x),5) + pow(log10(a),3);
	cout << fixed << setprecision(2) << f << endl;
}
