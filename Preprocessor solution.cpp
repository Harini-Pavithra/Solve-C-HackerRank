Input Format

The first line contains an integer N, denoting the size of the array.
The second line contains N space-separated integers, x1,x2.. , describing the elements in the array.
  
Output Format

You are not responsible for printing any output to stdout. Once the necessary preprocessor macros are written, the locked code in your editor will print a line that says Result=Z, where Z is the difference between the maximum and minimum values in the array.

Sample Input

5
32 332 -23 -154 65
Sample Output

Result = 486
  
Code:
/* Enter your macros here */

#define FUNCTION(name, operator) void name(int &current, int candidate){ !(current operator candidate) ? current = candidate : false; }
#define foreach(v, i) for(int i = 0; i < v.size(); i++)
#define io(v) cin >> v
#define INF 10000000
#define toStr(S) #S

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
