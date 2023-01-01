#include <bits/stdc++.h>
using namespace std;

int main(){
    int matrix[5][5];
    int l,r;
    for (int i = 0; i<5; i++){
        for (int j = 0; j<5; j++){
            cin>>matrix[i][j];
            if (matrix[i][j] == 1){
                l = i;
                r = j;
            }
        }
    }
    cout<< abs(2-l) + abs(2-r);
}