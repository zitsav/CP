#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for (int i = 0; i<n; i++){
        cin>>v[i];
    }
    int lmax = 1;
    int gmax = 1;
    for (int i = 1; i<n; i++){
        if (v[i] > v[i-1]){
            lmax++;
            if (lmax > gmax){
                gmax = lmax;
            }
        }
        else{
            lmax = 1;
        }
    }
    cout<<gmax;
}