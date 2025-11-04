#include <iostream>

using namespace std;
int tong(int a, int b){
	return a+b;
}



int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
void Name(){
	cout<<"Nam";
	
}
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout<<"Tong =";
	int tong = tong(5,6);
	cout <<tong;
	Name();
	system("pause");
	return 0;
}