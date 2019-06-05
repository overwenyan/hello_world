#include<iostream>
using namespace std;
/*GPA查询*/
int main()
{
	float score;
	cout<<"输入百分制分数，查看等级和绩点"<<endl;
	cin>>score;
	cout<<(score>=60? "pass" : "fail")<<endl;//计算成绩是否合格 
	if(score>=95) 
		cout<<"A(4.0)"<<endl;
	else if(score>=90)
		cout<<"A-(3.7)"<<endl;
	else if(score>=85)
		cout<<"B+(3.3)"<<endl;
	else if(score>=80)
		cout<<"B(3.0)"<<endl;
    else if(score>=77)
		cout<<"B-(2.7)"<<endl;
	else if(score>=73)
		cout<<"C+(2.3)"<<endl;
	else if(score>=70)
		cout<<"C(2.0)"<<endl;
	else if(score>=67)
		cout<<"C-(1.7)"<<endl;
	else if(score>=63)
		cout<<"D+(1.3)"<<endl;
	else if(score>=60)
		cout<<"D(1.0)"<<endl;
	else 
		cout<<"F"<<endl;//计算绩点和等第 
	system("pause");	
	return 0;
} 

  
/*
	其余部分代码 
    const float pi=3.14159;
	float r;
	cout<<"输入半径，输出面积\n"<<endl; 
	cin>>r;
	cout<<pi*r*r<<"(="<<r*r<<"π）"<<endl;//计算圆的面积 

	cout<<"输入一段文字，计算它的字符串长度"<<endl;
	char sentence;
	cin>>sentence; 
	cout<<sizeof sentence<<endl;//sizeof函数的应用  
*/
