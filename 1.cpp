#include <iostream>

using namespace std;

int main()
{
    int n,count=0;
    cin>>n;
    for(int i=1;i<n;i++){
        if(i %3 ==0 || i% 5 ==0)
        count += i;
        
    }

cout<<count;
    return 0;
}
