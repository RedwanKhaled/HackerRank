#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int solve(string st){
    
    int a1[30]={0},a2[30]={0},len = st.length(),n,i,add1=0;
    
    n = len/2;
    for(i=0;i<n;i++) a1[st[i]-'a']++;
    for(i=n;i<len;i++) a2[st[i]-'a']++;
    
    
    for(i=0;i<30;i++){ 
        if(a1[i]!=a2[i]){
            if(a2[i]>a1[i]) add1+=a2[i]-a1[i];
        }
    }
    
    return add1;
}


int main() {
    
    int T;
    string st;
    cin >> T;
    
    while(T--){
        
        cin >> st;
        
        if(st.length()&1){  cout << -1 << endl; continue;}
        
        cout << solve(st) << endl;
        
        
    }
    return 0;
}

