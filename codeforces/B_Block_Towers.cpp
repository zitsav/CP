#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        long long int arr[n];
        for (int i = 0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr, arr+n);
        long long int ans = arr[0];
        for (int i = 1; i<n; i++){
            while (arr[i] > ans){
                long long int gay = arr[i]+ans;
                if (gay%2 == 0){
                    arr[i] = gay/2;
                    ans = gay/2;
                }
                else{
                    arr[i] = gay/2;
                    ans = gay/2 + 1;
                }
            }
        }
        cout<<ans<<endl;
    }
}