#include<iostream>
#define ll long long
using namespace std;

ll f[100]={0};
ll fib(int n) {
        if (n == 0)
            return 0;
        
        int i = 0;  //��Ϊ�ݹ�n-2����һ��
        int f = 1; //��Ϊ�ݹ�n-1����һ��
        while (--n > 0) {
            f = i + f;   //�����һ����
            i = f - i;     //��һ����-�ݹ�n-2���� = �ݹ�n-1����
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
