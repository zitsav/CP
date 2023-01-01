#include <bits/stdc++.h>
using namespace std;

int main(){
    set<char>ss;
    string s;
    cin>>s;
    for (int i = 0; i<s.size(); i++){
        char p = s[i];
        ss.insert(p);
    }
    int n = 0;
    for (auto it = ss.begin(); it != ss.end(); it++){
        n++;
    }
    if (n%2 != 0){
        cout<<"IGNORE HIM!";
    }
    else{
        cout<<"CHAT WITH HER!";
    }
}