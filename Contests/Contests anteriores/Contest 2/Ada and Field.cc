#include <bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
// #include <ext/rope>
#define mp				make_pair
#define pb				push_back
#define all(a)			(a).begin(), (a).end()
#define sz(a)			(int)a.size()
#define eq(a, b)     	(fabs(a - b) < EPS)
#define md(a, b)		((a) % b + b) % b
#define mod(a)			md(a, MOD)
#define srt(a)			sort(all(a))
#define mem(a, h)		memset(a, (h), sizeof(a))
#define f 				first
#define s 				second
#define forn(i, n)			for(int i = 0, dfr = n; i < dfr; i++)
#define fore(i, b, e)	for(int i = b, asdz = e; i < asdz; i++)
#define forg(i, b, e, m)	for(int i = b, asdz = e, frz = m; i < asdz; i+=frz)
#define index	int mid = (b + e) / 2, l = node * 2 + 1, r = l + 1;
//int in(){int r=0,c;for(c=getchar();c<=32;c=getchar());if(c=='-') return -in();for(;c>32;r=(r<<1)+(r<<3)+c-'0',c=getchar());return r;}
//sort(all(v), [](int a, int b){ return a > b; });


using namespace std;
//using namespace __gnu_pbds;
// using namespace __gnu_cxx;

typedef long long 		ll;
typedef long double ld;	
typedef unsigned long long 		ull;
typedef pair<int, int>  ii;
typedef vector<int>     vi;
typedef vector<ii>      vii;
typedef vector<ll>      vll;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;
//find_by_order kth largest  order_of_key <
const int tam = 1000010;
const int MOD = 1000000007;
const int MOD1 = 998244353;
const double EPS = 1e-9;
const double PI = acos(-1); 

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	//freopen("asd.txt", "r", stdin);
	// freopen("qwe.txt", "w", stdout);
	int t;
	cin>>t;
	while(t--)
	{
		multiset<ll> v, h;
		set<int> liv, lih;
		int n, m, q, maxh, maxv, a, b;
		cin>>n>>m>>q;
		v.insert(n);
		h.insert(m);
		liv.insert(0);
		liv.insert(n);
		lih.insert(0);
		lih.insert(m);
		set<int>::iterator it, it1;
		while(q--)
		{
			cin>>a>>b;
			if(a == 0)
			{
				if(!liv.count(b))
				{
					it = liv.lower_bound(b);
					it1 = it;
					it--;
					v.erase(v.find(*it1 - *it));
					v.insert(b - *it);
					v.insert(*it1 - b);
					liv.insert(b);
				}
			}
			else
			{
				if(!lih.count(b))
				{
					it = lih.lower_bound(b);
					it1 = it;
					it--;
					h.erase(h.find(*it1 - *it));
					h.insert(b - *it);
					h.insert(*it1 - b);
					lih.insert(b);
				}
			}
			cout<<*--v.end() * *--h.end()<<'\n';
		}
	}
	return 0;
}