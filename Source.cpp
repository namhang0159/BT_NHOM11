#include <iostream>

using namespace std;
int tong(int a, int b){
	return a+b;
}
int hieu(int a, int b){
	return a-b;
}

int tich(int a, int b);
float thuong(int a, int b);
void Name(){
	cout<<"Nam";

	
}
void Name1(){
	cout<<"Nguyen";
	

}
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";

	cout<<"Tong ="; <<tong(5,3);
	cout << " Hieu La" << hieu(10,5);
	Name();

	cout<<"Tong =";
	int tong = tong(5,6);
	cout <<tong;
	Name();
	Name1();

	system("pause");
	return 0;
}