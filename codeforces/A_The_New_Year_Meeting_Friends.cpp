#include <bits/stdc++.h>
using namespace std;

int main(){
    int x1, x2, x3;
    cin>>x1>>x2>>x3;
    int mins = min(min(x1,x2), x3);
    int maxs = max(max(x1,x2),x3);
    cout<<maxs-mins;
}