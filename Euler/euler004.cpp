/*
*https://www.hackerrank.com/contests/projecteuler/challenges/euler004
*
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> vc;
vector<int> :: iterator it;


bool palindrome(int N){
    
    string st =to_string(N);
    
    int i=0,j=st.length()-1;
    
    while(i<j){
        if(st[i] != st[j]) return false;
        
        i++;
        j--;
    }
    
    return true;
    
}


void gen_product(){
    
    int i,j,x;
    for(i=100;i<1000;i++){
        for(j=100;j<1000;j++){
            x = i*j;
        
            if(x<101100) continue;
        
            if(palindrome(x)) vc.push_back(x);
        }
    }
    
    sort(vc.begin(),vc.end());
    
}

int main() {
    
    
    gen_product();
    
    int T,N;
    cin >> T;
    
    while(T--){
        
        cin >> N;
        
        it = lower_bound(vc.begin(),vc.end(),N);
        
        if(it-vc.begin()-1 >= 0 )
            
            cout << vc[it - vc.begin()-1] << endl;
        
    }
    
    return 0;
}
