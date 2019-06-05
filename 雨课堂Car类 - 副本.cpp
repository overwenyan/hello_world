#include<iostream>
using namespace std;

class Point{
private:
	int x,y;
public:
	Point(int xx=10,int yy=10):x(xx),y(yy){};
	Point(const& p){cout<<"调用复制构造函数"<<endl;}
//	Point g();
	~Point(){
		cout<<"out!!delete"<<endl;
	}
};

Point g(){
	Point a(1,2);
	return a;
}

int main()
{
	Point b;
	b=g();
//	cout<<b.Point()<<endl;
	system("pause");
	return 0;
}
