#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int>arr;
    for (int i = 0; i<n; i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    int ans = 0;
    int mini = arr[0];
    int maxa = 0; int mina = 0;
    int maxi = arr[0];
    for (int i = 0; i<n; i++){
        if (arr[i] > maxi){
            maxi = arr[i];
            maxa = i;
        }
        if (arr[i] <= mini){
            mini = arr[i];
            mina = i;
        }
    }
    ans += abs(maxa - 0) + abs(mina - (n-1));
    if (mina < maxa){
        ans--;
    }
    cout<<ans;
}