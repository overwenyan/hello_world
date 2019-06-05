#include<iostream>
using namespace std;

class Wheel{
private:
	int radius;
//	radius=10;
public:
	Wheel(int _radius=10){
		radius=_radius;
		cout<<"Wheel "<<radius<<";";	
	}
	~Wheel(){
		cout<<"É¾³ýwheel"<<endl;
	}
};

class CarBody{
	private:
		int shape;
	public:
		CarBody(int _shape=0){
			shape=_shape;
			cout<<"CarBody "<<shape<<";";
		}
		~CarBody(){
			cout<<"delete Carbody"<<endl;
		}	
};

class Car{
private:
	Wheel frontWheel,backWheel;
	CarBody body;
public:
	Car(int front,int back,int shape):
	frontWheel(front),body(shape){
		backWheel=back;
//		cout<<endl;
	}
	~Car(){
		cout<<"É¾³ýCar"<<endl;
	}
};

int main()
{
	Car(1,2,3);
//	cout<<endl;
//	system("pause");
	return 0;
}

