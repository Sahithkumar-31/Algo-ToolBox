// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int pisnop(long long m)
{
    long long a=0,b=1,k=0;
    for(int i=0;i<m*m;i++)
    {
        long long c=0;
        c=b;
        b=(a+b) % m;
        a=c;
        
        if((a==0)&&(b==1))
        {
            k=1+i;
        }
    }
    return k;
}

long long mod_f(long n,long m)
{
    int k=pisnop(m);
    n=n%k;
    long long a=0,b=1;
    
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
{
    for(int i=0;i<n-1;i++)
    {
        long long c=0;
        c=b;
        b=(a+b)%m;
        a=c;
    }
    return (b) %m;
}
}
int main() {
    long long n,m;
    cin>>n;
    cin>>m;
    
   cout<<mod_f(n,m);

    return 0;
}
