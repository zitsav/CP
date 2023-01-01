#include <bits/stdc++.h>
using namespace std;

int main(){
    string table;
    cin>>table;
    vector<string>v(5);
    for (int i = 0; i<5; i++){
        cin>>v[i];
    }
    int flag = 0;
    for (int i = 0; i<5; i++){
        if (v[i][0] == table[0]){
            flag = 1;
            cout<<"YES";
            break;
        }
        if (v[i][1] == table[1]){
            flag = 1;
            cout<<"YES";
            break;
        }
    }
    if (flag == 0){
        cout<<"NO";
    }
}