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
 

//�����ݣ���n�����ƻ� ,O(logn)
ll quickpow(ll a,ll n){
	a=a%mod;
	ll ans=1;
	while(n){
		if(n&1)  ans=(ans*a)%mod;//��nΪ����ʱִ�� 
		a=(a*a)%mod;
		n>>=1;//�൱��(ll)n=(ll)n/2 
	}
	return ans;
}
