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
ll n,in; // Thanks Tourist!!!
cin>>n; 
ll a[nax],b[nax],c[nax];
loop(i,1,n+1) cin>>a[i];
loop(i,1,n+1){
    cin>>in;
    b[in] = i;
}

loop(i,1,n+1){
    c[i] = b[a[i]];
    // cout<<c[i]<<" ";
}
ll mmax = c[0],ans=0;
loop(i,1,n+1){
    if(c[i] < mmax) ans++;
    mmax = max(mmax, c[i]);
}
cout<<ans;

	return 0;
}
