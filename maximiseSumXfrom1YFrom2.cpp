#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define pii pair<int,int>
#define vi vector<int>
#define vpii vector<pair<int,int>>
#define vvi vector<vector<int>>
#define bug1 cout<<"hi1"<<endl
#define bug2 cout<<"hi2"<<endl
#define bug3 cout<<"hi3"<<endl
const int N=1e5;
const int mod=1e9+7;

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,x,y,ans=0;
	cin>>n>>x>>y;

	int a[n],b[n];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++) cin>>b[i];

	vector<pair<int,pii>> v;

	for(int i=0;i<n;i++) v.pb(mp(abs(a[i]-b[i]),mp(a[i],b[i])));

	sort(v.rbegin(),v.rend());

	int i=0;

	while(i<n && x>0 && y>0)
	{
		int p=v[i].s.f , q=v[i].s.s;
		(p>q) ? ans+=p, x-- : ans+=q, y-- ;
		i++;
	}

	while(i<n && x--)
	{
		ans+=v[i++].s.f;
	}

	while(i<n && y--)
	{
		ans+=v[i++].s.s;
	}

	cout<<ans;

	return 0;
}