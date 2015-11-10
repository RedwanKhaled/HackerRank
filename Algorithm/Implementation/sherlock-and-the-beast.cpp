/*
*
*https://www.hackerrank.com/challenges/sherlock-and-the-beast
*
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void print(int num3,int num5){
    
    for(int i=0;i<num3;i++) putchar('5');
    for(int i=0;i<num5;i++) putchar('3');
    
    puts("");
}


int main() {
    int N,num3,num5,x,y;
    
    cin >> N;
    
    while(N--){
        cin >> x;
        y = x;
        num3 = 0;
        num5 = 0;
        
        if(x % 3 ==0){
            print(x,0);
        }
        else{
            
            while((x-5)>=0){
                num5+=5;
                x-=5;
                if(x%3==0){num3=x; break;}
            }

            if(num5+num3 == y) print(num3,num5);
            else cout << -1 << endl;
        }
        
    }
    return 0;
}

