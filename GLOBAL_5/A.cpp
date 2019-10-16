// 1 problem solved inside the contest.

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
ll a[nax];
loop(i,0,n) cin>>a[i];
ll countp=1,countn=1;
loop(i,0,n){
    if(a[i]%2 == 0) cout<<a[i]/2<<endl;
    else{
        if(a[i] > 0){
            if(countp%2 == 0) cout<<a[i]/2<<endl;
            else cout<<a[i]/2 + 1<<endl;
            ++countp;
        }
        else{
            if(countn%2 == 0) cout<<a[i]/2<<endl;
            else cout<<a[i]/2 - 1<<endl;
            ++countn;
        }
    }
}
 
	return 0;
}
