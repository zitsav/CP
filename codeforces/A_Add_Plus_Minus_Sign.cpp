#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>v;
        for (int i = 0; i<n; i++){
            char temp;
            cin>>temp;
            int gay = temp - '0';
            v.push_back(gay);
        }
        int sum = v[0];
        for (int i = 1; i<n; i++){
            if ((v[i] == 1) && (sum > 0)){
                cout<<"-";
                sum--;
            }
            else{
                cout<<"+";
                sum += v[i];
            }
        }
        cout<<endl;
    }
}