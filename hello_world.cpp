//C++语言程序设计（第4版），郑莉，清华大学
//例1_7：sizeof运算
#include <iostream>
#include <string>
using namespace std;
int main()
{
/*	cout << "sizeof(short) = " << sizeof(short) << endl;
	cout << "sizeof(unsigned short)= " << sizeof(unsigned short) << endl;
	cout << "sizeof(int) = " << sizeof(int) << endl;
	cout << "sizeof(unsigned int)= " << sizeof(unsigned int) << endl;
	cout << "sizeof(long) = " << sizeof(long) << endl;
	cout << "sizeof(unsigned long)= " << sizeof(unsigned long) << endl;
	cout << "sizeof(float)= " << sizeof(float) << endl;
	cout << "sizeof(double) = " << sizeof(double) << endl;
	cout << "sizeof(long double)= " << sizeof(long double)<< endl;
	cout << "sizeof(char)= " << sizeof(char) << endl;
	int a;
	a=3&5;
	cout<<"3&5="<<a<<endl;
	bool b;
	b= (a=0)||sizeof(int);
	cout<<"(a=0)||sizeof(int)="<<b<<endl;*/
	int i=0,num;
	cin>>num;
		while (num>0){
			num=num/10;
			i+=1;
		}
	cout<<i;
	return 0;
}
