#include <iostream>
using namespace std;

int c;
long long gcd(long long a, long long b)
{if(b==0)
{
	return a;
}
    gcd(b,a%b);
}

long long lcm(long long a,long long b)
{
	if(a>b)
	{
		return (a/gcd(a,b))*b;
	}
	
	else
	{
		return (b/gcd(a,b))*a;
	}
}

int main()
{
	long long a,b;
	cin>>a;
	cin>>b;
	
	cout<<lcm(a,b);
}
