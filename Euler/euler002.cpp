#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
	long long x[50],a=1,b=1,c;
    int index=0,i;
    for(i=0;i<85;i++){
        c = a + b;
        if(c%2==0) x[index++] = c;
        a = b; b = c;
    }
    
    long long sum =0;
    int N;
    cin >> N;
    
    while(N--){
        cin >> a;
        sum=0;
        for(i=0;x[i]<=a;i++)
            sum+=x[i];
        cout << sum << endl;
    }
    return 0;
}

