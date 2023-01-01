#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int p = 0;
        for (int i = 1; i<=9; i++){
            if (n != 1*i){
                p++;
            }
            else{
                p++;
                break;
            }
            if (n != 11*i){
                p += 2;
            }
            else{
                p += 2;
                break;
            }
            if (n != 111*i){
                p += 3;
            }
            else{
                p += 3;
                break;
            }
            if (n != 1111*i){
                p += 4;
            }
            else{
                p += 4;
                break;
            }
        }
        cout<<p<<endl;
    }
}