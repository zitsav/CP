#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        int x[3], y[3];
        cin>>x[0]>>y[0]>>x[1]>>y[1]>>x[2]>>y[2];
        int flag = 0;
        for (int i = 0; i<3; i++){
            for (int j = 0; j<3; j++){
                for (int k = 0; k<3; k++){
                    if (i != j && j != k){
                        if (x[i] > x[k] && x[i] < x[j]){
                            flag = 1;
                        }
                        if (y[i] > y[k] && y[i] < y[j]){
                            flag = 1;
                        }
                    }
                }
            }
        }
        if (flag == 0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}