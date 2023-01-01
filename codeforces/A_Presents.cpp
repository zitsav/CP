#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    map<int,int>m;
    for (int i = 1; i<n+1; i++){
        int temp;
        cin>>temp;
        m[temp] = i;
    }
    for (auto it = m.begin();  it!= m.end(); it++){
        cout<<it->second<<" ";
    }
}