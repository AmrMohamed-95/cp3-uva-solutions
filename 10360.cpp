#include <bits/stdc++.h>

using namespace std;

#define SZ(v) (int)v.size()
#define ALL(v) v.begin(),v.end()
#define ALLR(v) v.rbegin(),v.rend()
#define FN(s,c) (int)s.find(c)
#define FOR(i,e) for (int i = 0; i < e; i++)
#define MFOR(i,s,e) for (int i = s; i <= e; i++)
#define ROF(i,s) for (int i = s-1; i >= 0; i--)
#define MROF(i,s,e) for (int i = s; i >= e; i--)
#define IT(it,v) for(it=v.begin();it!=v.end();it++)
#define TI(it,v) for(it=v.rbegin();it!=v.rend();it++)
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define FILL(a,v) memset(a,v,sizeof(a))

typedef long long ll;
/*************************************************/

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
//	freopen("out.txt", "w", stdout);
#endif

	int t;
	cin >> t;
	string s;
	FOR(z,t)
	{
		int d, n;
		int killed[1080][1080] = { 0 };
		cin >> d >> n;
		FOR(i,n)
		{
			int a, b, c;
			cin >> a >> b >> c;
			MFOR(j,a-d,a+d)
			{
				if (j < 0 || j > 1024) {
					continue;
				}
				MFOR(k,b-d,b+d)
				{
					if (k < 0 || k > 1024) {
						continue;
					}
					killed[j][k] += c;
				}
			}

		}

		int mx = 0, a, b;
		FOR(i,1025)
		{
			FOR(j, 1025)
			{
				if (killed[i][j] > mx) {
					a = i;
					b = j;
					mx = killed[i][j];
				}
			}
		}
		cout << a << ' ' << b << ' ' << mx << endl;
	}
	return 0;
}

