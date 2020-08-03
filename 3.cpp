#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n = 600851475143;
    
    long long maxPrime = -1;
    while(n%2 ==0){
        maxPrime = 2;
        n /=2; //or n>>=1;
    }
    
    for(int i=3;i <= sqrt(n); i+=2){
        while(n%i==0){
            maxPrime = i;
            n = n/i;
        }
    }
    
    if(n>2)
    maxPrime = n;
    
    cout<<maxPrime<<endl;
    return 0;
}
