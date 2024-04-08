#include<bits/stdc++.h>
using namespace std;
const int N=100000;
vector<bool>isPrime(N,true);

void seive()
{
    isPrime[0]=isPrime[1]=false;
    for(int i=2;i<N;++i)
    {
        if(isPrime[i]==true)
        {
            for(int j=2*i;j<N;j+=i)
            {
                isPrime[j]=false;
            }
        }
    }
}
int main()
{
     seive();
     int n;
     cin>>n;
     if( isPrime[n])
     cout<<"prime"<<endl;
     else
     cout<<"not prime"<<endl;
}