#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    for (int i = 0; i<s.size(); i++){
        if (i == 0 && s[i] == '9'){
            continue;
        }
        if (s[i] >= '5'){
            int x = s[i] - '0';
            x -= 5;
            x = x*2 + 1;
            s[i] = s[i] - x;
        }
    }
    cout<<s;
}