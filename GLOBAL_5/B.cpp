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
ll n;
cin>>n;
ll a[nax],b[nax],in;
loop(i,0,n) cin>>a[i];
loop(i,0,n){
    cin>>in;
    b[in] = i; // Trick to use value instead of key
}
ll ans=0,mmax=b[a[0]];
loop(i,1,n){
    if(b[a[i]] < mmax) ++ans;
    mmax = max(mmax, b[a[i]]);
}
cout<<ans;

	return 0;
}
