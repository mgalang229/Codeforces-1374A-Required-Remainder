#include <bits/stdc++.h>

using namespace std;

void solve(){
	int x, y, n;
	cin >> x >> y >> n;
	int n1 = n / x;
	int n2 = n1 * x + y;
	if(n2 > n) n2 -= x;
	cout << n2 << "\n";
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}