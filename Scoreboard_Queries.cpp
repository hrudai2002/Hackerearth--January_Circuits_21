#include <bits/stdc++.h>
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
 
 
/*void print(unordered_map<ll,ll> mp){
 
unordered_map<ll,ll> :: iterator it;
 
ll cnt = 0;
 
for(auto it = mp.begin(); it != mp.end(); ++it){
    if(it->second > 0)
     cnt++;
}
   cout << cnt + 1 << endl;
 
}*/
 
 
void solve(){
 
	ll n, q;
	  cin >> n >> q;
	ll ar[n + 1];
	unordered_map <ll,ll> mp;
	for(ll i = 1; i <= n; ++i){
		cin >> ar[i];
		mp[ar[i]]++;
	}
 
	//cin >> q;
	int cnt = mp.size() + 1;
   while(q--){
		ll l,r;
		cin >> l >> r;
		mp[ar[l]]--;
		if(mp[ar[l]] <= 0) cnt--;
		ar[l] = r;
		mp[ar[l]]++;
		if(mp[ar[l]] == 1) cnt++;
 
		cout << cnt << endl;
	  
	}
 
}
int main()
{   IOS
	int T;
	 cin >> T;
 
	while(T--){
		solve();
	}
 
	return 0;
}