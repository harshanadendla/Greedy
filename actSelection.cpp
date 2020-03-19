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

    int n,a,b;
    cin>>n;

    vpii v;
    vi ans={0};

    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        v.pb(mp(a,b));
    }

    sort(v.begin(),v.end(),[](pii p,pii q){return p.s<q.s;});

    pii p=v[0];
    for(int i=1;i<n;i++)
    {
        if(v[i].f>=p.s) 
        {
            ans.pb(i);
            p=v[i];
        }
    }

    for(int i :ans)
    {
        cout<<i<<" ";
    }

    return 0;
}