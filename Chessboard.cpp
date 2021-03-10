#include <bits/stdc++.h>
using namespace std;
void solve(){
   int x1,y1;
    cin >> x1 >> y1;
   int x2,y2;
    cin >> x2 >> y2;
   if(x1 == x2 && y1 == y2){
       cout << "SECOND" << endl;
       return;
   }
   int d = sqrt(pow(y2 - y1,2) + pow(x2 - x1,2));
   if(d == 1){
       cout << "FIRST" << endl;
   }
   else{
       cout << "DRAW" << endl;
   }
 
}
int main()
{
    int T;
     cin >> T;
    while(T--){
        solve();
    }
 
    return 0;
}