#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, m;
    string x, s;
    cin >> n >> m;
    cin >> x >> s;    
    int i = 0;
    while(i < 6){        
        if(x.find(s) != string::npos){
            cout << i << endl;
            return;
        } else{
            x += x;
            i ++;            
        }
    }
    cout << - 1 << endl;

}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
}