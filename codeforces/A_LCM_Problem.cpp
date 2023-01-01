#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int l,r;
        cin>>l>>r;
        int a = l;
        int b = (l*2);
        if (b > r){
            cout<<-1<<" "<<-1<<endl;
        }
        else{
            cout<<a<<" "<<b<<endl;
        }
    }
}