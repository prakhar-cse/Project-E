
#include <iostream>
using namespace std;

int main()
{
    int t1=1,t2=2,n=4000000,next,sum=0;
    
    next = t1 + t2;
    
    while(next<=n){
        if(next % 2 ==0)
        sum +=next;
        
        t1 = t2;
        t2 = next;
        next = t1+t2;
    }  
    
//1,2,3,5,8,13,21,34,55
cout<<sum+2;
    return 0;
}
