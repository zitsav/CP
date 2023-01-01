#include <bits/stdc++.h>
using namespace std;

vector<int>pig;

void move(vector<vector<int>>v, int i){
    if (v[i][0] == 1){
        pig.push_back(v[i][1]);
    }
    if (v[i][0] == 2){
        for (int j = 0; j<pig.size(); j++){
            pig[j] -= v[i][1];
        }
    }
    if (v[i][0] == 3){
        for (int j = 0; j<i; j++){
            move(v, j);
        }
    }
}

int main()
{
        vector<vector<int>>v;
        int n;
        cin>>n;
        for (int i = 0; i<n; i++){
            vector<int>temp;
            int a;
            cin>>a;
            temp.push_back(a);
            if (a != 3){
                int b;
                cin>>b;
                temp.push_back(b);
            }
            v.push_back(temp);
        }
        for (int i = 0; i<n; i++){
            move(v, i);
        }
        int ans = 0;
        for (int i = 0; i<pig.size(); i++){
            if (pig[i] > 0){
                ans++;
            }
        }
        cout<<ans<<endl;
}