#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
int main()
{
	int i,j;
	int a[10];
	for(i=0;i<10;i++)
	{
		a[i]=i*i;
		cout<<a[i]<<endl;
	}
	system("pause");
	return 0;
}
/*	for(i=0;i<=100;i++)
	{
		for(j=0;j<=100;j++)
		{
			if ((i+j)==50)
			cout<<i<<"  "<<j<<endl; 
		}
	} */
