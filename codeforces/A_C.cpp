#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int a,b,n;
        cin>>a>>b>>n;
        int ans = 0;
        while (a <= n || b <= n){
            if (b > a){
                a += b;
                ans++;
            }
            else{
                b += a;
                ans++;
            }
            if (a > n || b > n){
                break;
            }
        }
        cout<<ans<<endl;
    }
}