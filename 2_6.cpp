#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;
long long sum(long long n)
{
	if(n<=1)
	{
		return n;
	}
	long long a=0,b=1,sum=1,sum60=1,c=0;
	for(int i=0;i<59;i++)
	{
		c=a;
		a=b;
		b=(c+b);
		sum=(sum+b)%10;
		if(i < (n-1)%60)
		{
			sum60=(sum60+b)%10;
		}
	}
	return (sum*(n/60)%10 + sum60)%10;
}
int main() {
    
     long long n;
     cin>>n;
     cout<<sum(n);

     
}
