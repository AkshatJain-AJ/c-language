#include <map>
#include <iostream>
#include<math.h>
using namespace std;
#define long long long
const long mod = 1000000007

map<long,long> Major;

long minor(long n)
{
    if (Major.count(n))
        return(Major[n]);

    long k = n/2;
    if(n%2==0)
    {
        Major[n]=(minor(k)*minor(k) + minor(k-1)*minor(k-1))%mod;
        return(Major[n]);
    }
    else
    {
        Major[n]=(minor(k)*minor(k+1)) + minor(k)*minor(k-1))%mod;
        return(Major[n]);
    }
}

main()
{
    long m;
    Major[0]=1;
    Major[1]=1;
    long n;
    while (cin>>n)
    m=long(log2 (n));
    l=long(pow(2,m));
    if (n==0)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<minor(l-1)<<endl;
    }

}
