/*
*
*https://www.hackerrank.com/contests/projecteuler/challenges/euler003
*
*/




#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

ll largest_factor(ll N){
    
    ll i=0,largest;
    
    while(N%2==0){N/=2; largest = 2;}
    
    for(i=3;i*i<=N;i+=2){
        
        while(N%i==0){
            if(i>largest) largest = i;
            N/=i;
        }
    }
    if(N>largest) largest = N;
    
    return largest;
} 

int main() {
    
    int T;
    ll N;
    cin >> T;
    
    while(T--){
        
        cin >> N;
        
        cout << largest_factor(N) << endl;
    }
    return 0;
}

