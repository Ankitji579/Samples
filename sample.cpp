/*==================================================
  Author : Ankit Vashisth
  Date   : Thursday 02-07-2026
  Time   : 22:37:37
==================================================*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int y;
    cin>> y;
    if(y%4==0 && y%100!=0 || y%400==0){
        cout<< "Yes";
    }else{
        cout<< "No";
    }

    return 0;
}