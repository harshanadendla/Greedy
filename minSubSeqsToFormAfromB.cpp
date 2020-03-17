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

int minSubsFromAtoB(string a,string b)
{
    vi idxs[26];

    int ans=1,j=0,id=-1;
    
    for(int i=0;i<a.size();i++)
    {
        int o=(int)a[i]-97;
        idxs[o].pb(i);
    }

    while(j<b.size())
    {
        int o=(int)b[j]-97;
        if(idxs[o].size()==0) return -1;

        int k=upper_bound(idxs[o].begin(),idxs[o].end(),id)-idxs[o].begin();
        
        if(k==idxs[o].size())
        {
            ans++;
            id=-1;
        }
        else
        {
            j++;
            id=idxs[o][k];
        }
    }

    return ans;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif

    string a,b;
    cin>>a>>b;

    cout<<minSubsFromAtoB(a,b);

    return 0;
}
