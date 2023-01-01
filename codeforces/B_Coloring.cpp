#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        int n,m,k; cin>>n>>m>>k;
        int arr[m];
        for (int i = 0; i<m; i++){
            cin>>arr[i];
        }
        int l = n/k;
        int flag = 1;
        if (m < l){
            flag = 0;
            cout<<"NO"<<endl;
            continue;
        }
        for (int i = 0; i<m; i++){
            if (arr[i] > l){
                flag = 0;
                cout<<"NO"<<endl;
                continue;
            }
        }
        if (flag == 1){
            cout<<"YES"<<endl;
        }
    }
}