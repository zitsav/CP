#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int a = 0;
    while (n--){
        string s;
        cin>>s;
        if (s ==  "++X" || s == "X++"){
            a++;
        }
        else if (s == "--X" || s == "X--"){
            a--;
        }
    }
    cout<<a<<endl;
}