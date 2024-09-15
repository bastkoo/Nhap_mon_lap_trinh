#include <bits/stdc++.h>
using namespace std;
int main () {
	double a,b,c;
	cin >> a >> b >> c;
	if ((a>=b+c) or (b>=c+a) or (c>=a+b)) 
	cout << "No Solution"; else
	{
		double p = (a+b+c)/2;
		cout << fixed << setprecision(4) << sqrt(p*(p-a)*(p-b)*(p-c));
	} 
	return 0;
	
}
