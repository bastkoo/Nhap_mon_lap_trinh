#include<bits/stdc++.h>
using namespace std;
int main()
{
	double x;
	cin >> x;
	double f = sin(x)+sqrt(log10(3*x)/log10(4))+ceil(3*exp(x));
 	cout << fixed << setprecision(6) << f << endl;
	return 0;
}
