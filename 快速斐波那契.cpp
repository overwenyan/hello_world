#include<iostream>
#define ll long long
using namespace std;

ll f[100]={0};
ll fib(int n) {
        if (n == 0)
            return 0;
        
        int i = 0;  //作为递归n-2的那一项
        int f = 1; //作为递归n-1的那一项
        while (--n > 0) {
            f = i + f;   //求出下一个数
            i = f - i;     //下一个数-递归n-2的项 = 递归n-1的项
        }
        return f;
}
/*
ll f[100]={0};
ll fib(int n){
	if(f[n]) return f[n];
	f[n]=fib(n-1)+fib(n-2);
	return f[n];
	
}//O(n)*/
int main()
{
	f[1]=f[0]=1;
	int n;
	cin>>n;
	cout<<fib(n)<<endl; 
for(int i=0;i<n;i++){
		cout<<fib(i)<<endl;
	} 
	return 0;
}
