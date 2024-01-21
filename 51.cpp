#include <bits/stdc++.h>
using namespace std;
int main(){
	int h,a,b,ngboduoc=0,ngay=0;
	cin >> h >> a >> b;
	if (a=h) cout << 1; else 
	if ((a=b) and (a<h)) cout <<-1; else { 
	while ((ngboduoc+a)<h) { 
		ngboduoc=ngboduoc+a;
		ngboduoc=ngboduoc-b;
		ngay=ngay+1;
	} 
		cout << ngay+1;}
	return 0;
}
