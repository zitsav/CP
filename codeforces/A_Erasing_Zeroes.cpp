#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while (n--){
        string s;
        cin>>s;
        int p = s.size();
        int ans = 0;
        int l,r;
        int flag = 0;
        for (int i = 0; i<p; i++){
            if (s[i] == '1'){
                l = i;
                flag = 1;
                break;
            }
        }
        for (int i = p-1; i>=0; i--){
            if (s[i] == '1'){
                r = i;
                break;
            }
        }
        if (flag == 1){
            for (int i = l+1; i<r; i++){
                if (s[i] == '0'){
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
}