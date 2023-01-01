#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i = 1;
    while (true){
        n -= (i*(i+1))/2;
        if (n < 0){
            break;
        }
        i++;
    }
    cout<<i-1;
}