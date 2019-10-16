// Upsolve
// I am Varun Das from Jadavpur University
#include <bits/stdc++.h>
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#define mod 1000000007
#define ll long long
#define dbg(x) cerr << #x << " = " << x << endl
#define INF LLONG_MAX
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a,b) for(int i=a;i>=b;i--)
#define nax 503405
using namespace std;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//cout<<fixed<<setprecision(12);
ll q;
cin>>q;
while(q--){
    ll n,r,a;
    cin>>n>>r;
    vector<ll>v,v1;
    loop(i,0,n){
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    v1.push_back(v[0]);
    loop(i,1,v.size()) if(v[i-1] != v[i]) v1.push_back(v[i]);
    ll ans=0;
    rep(i,v1.size() - 1,0){
        if(v1[i-1] - (++ans) * r <= 0 and i!=0) break;
    }
    cout<<ans<<endl;
}

	return 0;
}
