#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int x = b;
        int y = (b+c)/2;
        int z = c;
        if (z >= (y+x)){
            y = c;
        }
        cout<<x<<" "<<y<<" "<<z<<endl;
    }
}