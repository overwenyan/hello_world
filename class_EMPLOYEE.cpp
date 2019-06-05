//#ifdef EMPLOYEE
#include<iostream>
#include<cstring>
using namespace std;

class Employee{
private:
	char name[30];
	char street[30];
	char city[8];
	char zip[6];
public:
	Employee(char *n,char *str,char *ct,char *z);
	void change_name(char*n);
	void display();
	~Employee();
};

Employee::Employee(char *n, char *str, char *ct, char*z){
	strcpy(name,n);
	strcpy(street,str);
	strcpy(city,ct);
	strcpy(zip,z);
};

void Employee::change_name(char *n){
	strcpy(name,n);
};

void Employee::display(){
	cout<<name<<"\t"<<street<<"\t";
	cout<<city<<"\t"<<zip;
};

int main()
{
	Employee emp[5] = { ("大毛", "双清路", "北京", "100084"),
						("二毛", "双清路", "北京", "100084"),
						Employee("三毛", "双清路", "北京", "100084"),
						Employee("四毛", "双清路", "北京", "100084"),
						("五毛", "双清路", "北京", "100084") };
	
	for (int i = 0; i < 5;i++){
		emp[i].display();
		cout << "\n";
	}
	system("pause");
	return 0;
}

