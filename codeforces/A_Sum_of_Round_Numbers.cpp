#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while (n--){
        int p;
        cin>>p;
        vector<int>ans;
        int n = 1;
        while (p>0){
            if (p%10 == 0){
                p /= 10;
                n *= 10;
                continue;
            }
            else{
                int x = (p%10) * n;
                ans.push_back(x);
                p /= 10;
                n *= 10;
            }
        }
        cout<<ans.size()<<endl;
        for (int i = 0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}