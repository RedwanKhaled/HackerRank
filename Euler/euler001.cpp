/*
*
*https://www.hackerrank.com/contests/projecteuler/challenges/euler001
*
/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



long long get_sum(int n,int freq){

	if(!freq) return 0;
	long long add=0;

	add = freq;						//Formula: n+2*n+3*n+.......+m = m/2*{2*n+(m-1)*n}
	add = (add-1)*n;
	add += 2*n;
	add*=freq;
	
	return add/2;
}

int main() {
    
	int T,N;
	long long sum;

	scanf("%d",&T);

	while(T--){

		scanf("%d",&N);
		N--;
		sum = get_sum(3,N/3) + get_sum(5,N/5) - get_sum(15,N/15);
		
		printf("%lld\n",sum);
	}
	    
    return 0;
}

