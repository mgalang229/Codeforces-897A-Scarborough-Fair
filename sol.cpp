#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m;
	cin >> n >> m;
	char s[n];
	for(int i=0; i<n; ++i)
		cin >> s[i];
	for(int i=0; i<m; ++i) {
		int l, r;
		cin >> l >> r;
		char c1, c2;
		cin >> c1 >> c2;
		for(int j=0; j<n; ++j)
			if(j+1>=l&&j+1<=r)
				if(s[j]==c1)
					s[j]=c2;
	}
	for(int i=0; i<n; ++i)
		cout << s[i];
	cout << "\n";
}
