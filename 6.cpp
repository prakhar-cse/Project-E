#include <iostream>

using namespace std;

int main()
{
int sum1=0,sum2=0,n;
cin>>n;
    for(int i=1;i<=n;i++)
    {
    sum1 = i*i + sum1;
    }

  for(int i=1;i<=n;i++)
    {
    sum2 = i + sum2;
    }
    
    sum2 = sum2*sum2;
    
    
    cout<<sum2-sum1<<endl;
    return 0;
}
