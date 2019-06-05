#include<iostream>
#define ll long long
#define mod 10000007
using namespace std;


ll quickpow(ll a,ll n);

int main()
{
	ll a,n;
	cin>>a>>n;
	ll ans=quickpow(a,n);
	cout<<ans<<endl;
	return 0;
}
 

//快速幂，将n二进制化 ,O(logn)
ll quickpow(ll a,ll n){
	a=a%mod;
	ll ans=1;
	while(n){
		if(n&1)  ans=(ans*a)%mod;//若n为奇数时执行 
		a=(a*a)%mod;
		n>>=1;//相当于(ll)n=(ll)n/2 
	}
	return ans;
}
