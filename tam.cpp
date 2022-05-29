#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template<typename T>
using ordered_set=tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;

#define ll long long
#define ull unsigned long long
#define pi pair<ll,ll>
#define pii pair<ll,pi>
#define inf 1000000000000
#define iinf -1000000000000000000
#define __   ios_base::sync_with_stdio(0);cin.tie();cout.tie();
#define MOD 1000000007
#define uu first
#define vv second
#define endl '\n'

pi operator+(pi a, ll x)     {return {a.uu + x, a.vv + x} ;}
pi operator- (pi a, ll x)     {return {a.uu - x, a.vv - x} ;}
pi operator* (pi a, ll x)     {return {a.uu * x, a.vv * x} ;}
pi operator+(pi x, pi y) { return {x.uu + y.uu,x.vv + y.vv} ;}
pi operator-(pi x,pi y) { return {x.uu - y.uu, x.vv - y.vv} ;}
pi operator*(pi x,pi y) { return {x.uu * y.uu , x.vv * y.vv} ;}
pi operator%(pi x,pi y) { return {x.uu % y.uu, x.vv % y.vv} ;}

const pi base = {103,101};

const pi  mod = {1000000021, 1e9 + 9 };

ll Set(ll N,ll pos){ return N=N | (1LL<<pos); }
ll reset(ll N,ll pos){ return N= N & ~(1LL<<pos); }
bool check(ll N,ll pos){ return (bool)(N & (1LL<<pos)); }

ll ar[]={0,0,1,-1};
ll br[]={1,-1,0,0};

///*******GEOMETRY**********///
double PI=acos(-1.0);

double gcd(double a,double b){
    return fabs(b)<1e-4?a:gcd(b,fmod(a,b));
}

///*******GEOMETRY**********///

ll sqrt_ (int64_t x) {
    int64_t y = sqrt(x);
    while (y * y > x) {
      --y;
    }
    while (y * y <= x) {
      ++y;
    }
    return y - 1;
}

ll bigmod(ll n,ll pow){
if(pow==0) return 1;
if(pow==1) return n%MOD;

ll ans=bigmod(n,pow/2);
ans=(ans*ans)%MOD;

if(pow%2==1){ans=(ans*n)%MOD;}
return ans%MOD;
}

ll fact[1000005];


ll nCr(ll n,ll r){

ll ans=fact[n];
ans=(ans*bigmod(fact[r],MOD-2))%MOD;
ans=(ans*bigmod(fact[n-r],MOD-2))%MOD;
return ans;
}

string s,s1,s2;
ll n,m;
ll arr[5000010];
ll brr[5000010];
vector<ll>v,v1;

map<ll,ll>mp;
ll vis[5000005];
ll dp[1005][(1LL<<11)+5];
vector<ll>graph[1005];
ll go(ll n,ll par){
    ll i,j,adj;

    for(i=0;i<graph[src].size();i++){
        adj=graph[src][i];
        if(par==adj) continue;
        for(ll mask=1;mask<m;mask++){
            for(j=mask;j>=0;j=mask&(j-1)){
                
            }
        }
    }
}

void init(){
    ll i,j;

    for(i=0;i<=1000;i++){
        for(j=0;j<=(1LL<<m);j++) dp[i][j]=inf;
    }

    for(i)
}

int main()
{__
    ///*
#ifndef ONLINE_JUDGE
    freopen("input.cpp", "r", stdin);
    //freopen("output.txt" , "w" , stdout);
#endif // ONLINE_JUDGE
    //*/
        ll i,j,a,b,c,d,e,f,g,x,y,z,t,k,l,r;
        fact[0]=1;

      //  for(i=1;i<=1000000;i++) fact[i]=(fact[i-1]*i)%MOD;
        ll ans=0,sum=0,temp;

        cin>>t;

        for(ll cz=0;cz<t;cz++){
            cin>>n>>m;

            for(i=1;i<=n;i++) cin>>arr[i];

            for(i=1;i<n;i++){
                cin>>a>>b;
                graph[a].push_back(b);
                graph[b].push_back(a);
            }
        }
}



