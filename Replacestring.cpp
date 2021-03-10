#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
   
ll m,n; 
  cin >> n >> m;
  if(n == 1){
	  if(m == 1){
		  cout << "1" << endl;
	  }
	  else{
		  cout << "-1" << endl;
	  }
  }
  ll sum = 1;
  ll cnt = 2, ctr = 0;
  while(sum < m){
	  if(ctr == 2){
		  ctr = 0;
		  cnt++;
	  }
	  sum += cnt;
	  ctr++;
  }
  if(sum == m){
	  if(n == 2){
		  cout << "1 2";
		  return;
	  }
	  if(n == 3){
		  cout << "1 2" << endl;
		  cout << "1 3" << endl;
		  return;
	  }
      cout << "1 2" << endl;
	  cout << "1 3" << endl;
	 ll even = 2, odd = 3 , i = 3;
	    while(i < n){
          cout << even << " " << even + 2 << endl;
		  even += 2;
		  i++;
		  if(i >= n){
			  return;
		  }
		  cout << odd << " " << odd + 2 << endl;
		  odd += 2;
		  i++;
	 }
 
  }
  else{
	  cout << "-1" << endl;
  }
 
}
 
int main()
{
	solve();
 
	return 0;
}