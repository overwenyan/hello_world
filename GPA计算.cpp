#include<iostream>
using namespace std;
/*GPA��ѯ*/
int main()
{
	float score;
	cout<<"����ٷ��Ʒ������鿴�ȼ��ͼ���"<<endl;
	cin>>score;
	cout<<(score>=60? "pass" : "fail")<<endl;//����ɼ��Ƿ�ϸ� 
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
		cout<<"F"<<endl;//���㼨��͵ȵ� 
	system("pause");	
	return 0;
} 

  
/*
	���ಿ�ִ��� 
    const float pi=3.14159;
	float r;
	cout<<"����뾶��������\n"<<endl; 
	cin>>r;
	cout<<pi*r*r<<"(="<<r*r<<"�У�"<<endl;//����Բ����� 

	cout<<"����һ�����֣����������ַ�������"<<endl;
	char sentence;
	cin>>sentence; 
	cout<<sizeof sentence<<endl;//sizeof������Ӧ��  
*/
