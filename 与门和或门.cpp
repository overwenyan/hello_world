#include <stdio.h>
#include<iostream>
using namespace std;
int main(void)
{
	int hour1,hour2;
	int minute1,minute2;
	printf("请输入2组时间，输完一组按下enter，按照——小时——分钟格式\n");
	scanf("%d %d",&hour2,&minute2); 
	scanf("%d %d",&hour1,&minute1);
 	int ih = hour2-hour1;
	int im = minute2-minute1;
	if(ih<0)
	{
		ih = -ih;
		im = -im;
		if (im<0)
		{
			im = im+60;
			ih--;	
		} 
	}	
	printf("两个时间的时间差为%d小时%d分钟\n\n",ih,im);
	int i,j;
	bool andgate,orgate;
	cout<<"         i"<<" j"<<" A"<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			andgate=i&&j;
			cout<<"AndGate  ";
			cout<<i<<" "<<j<<" "<<andgate<<endl;
		} 
	}
		
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			orgate=i||j;
			cout<<"OrGate   ";
			cout<<i<<" "<<j<<" "<<orgate<<endl;
		} 
	}
	cout<<"\n"<<endl;
	//switch语句 
	cout<<"请输入0~9之间的一个数字"<<endl;
	cin>>i;
	switch(i)
	{
		case 6 :cout<<"两开花"<<endl;
				break;
		default: cout<<"shut down"<<endl; 
	}
	system("pause");
	return 0;
}
