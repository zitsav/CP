#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int a,b;
    cin>>a>>b;
    int n = 0;
    while (true){
        n++;
        a *= 3;
        b *= 2;
        if (a>b){
            cout<<n;
            break;
        }
    }
}