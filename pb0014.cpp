#include <bits/stdc++.h>
using namespace std;
int main (){
	long long a,b;
	cin >> a >> b;
	if ((a==0 and (b=!0)) cout << "No Solution";
	if ((a==0) and (b==0)) cout <<" Many Solutions";
	if (a!=0)  cout << fixed << setprecision(2) << ( double ) -b/a;
	}
	return 0;
}
