#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n; cin>>n;
    int cap = 0;
    int maxc = 0;
    for (int i = 0; i<n; i++){
        int a,b;
        cin>>a>>b;
        cap += b-a;
        maxc = max(maxc, cap);
    }
    cout<<maxc;
}