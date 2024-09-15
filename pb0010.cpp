#include<bits/stdc++.h>
using namespace std;
int main()
{ 	const double pi = 3.14159;
	double a,b,c;
	cin >> a >> b >> c;
	double sinc= sin(c*(pi/180));
	cout << fixed << setprecision(2) << (a*b*sinc)/2 << endl;
}
