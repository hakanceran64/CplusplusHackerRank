/*
 * @Author: Hakan CERAN
 * @Time: 15.08.2022
 * @Content: Preprocessor Solution
 * 
 * */

/* Enter your macros here */

#define toStr(S) #S

#define io(v) cin >> v

#define FUNCTION(name, operator) void name(int &current, int candidate){!(current operator candidate) ? current = candidate : false;}

#define foreach(v, i) for (int i = 0; i < v.size(); i++)

#define INF 10000000

#include <iostream>
#include <vector>

using namespace std;

#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif 

FUNCTION(minimum, <)
FUNCTION(maximum, >)

int main(){
	int n; cin >> n;

	vector<int> v(n);

	foreach(v, i) {
		io(v)[i];
	}

	int mn = INF;
	int mx = -INF;

	foreach(v, i) {
		minimum(mn, v[i]);
		maximum(mx, v[i]);
	}

	int ans = mx - mn;

	cout << toStr(Result =) <<' '<< ans;

	return 0;

}
