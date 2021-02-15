#include<bits/stdc++.h>

using namespace std;


#define fo(i,n) for(int i = 0;i<n;i++)
#define fo1(i,k,n) for(int i = k;i<n;i++)
#define Fo(i,n) for(int i = n;i>=1;i--)
#define Fo1(i,k,n) for(int i = n;i >= k;i--)
#define pb push_back
#define pf push_front
#define popf pop_front
#define popb pop_back
#define I(x) x.begin(),x.end()
#define co(x) cout<<x<<"\n";
#define ci(x) cin>>x;

typedef long long  ll;
typedef long double ld;       

int main(){ 
     #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    ci(t)
    while(t--){
        string s;
        ci(s)
        int x=s.size(),cnt=0;
        fo(i,x/2){
            if(s[i] != s[x-i-1])
                cnt+=abs(s[i]-s[x-i-1]);
        }
        co(cnt)
    }
	return 0;

}
