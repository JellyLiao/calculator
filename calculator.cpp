/*
	Name: Simple calculator
	Copyright: JellyLiao
	Author: JellyLiao
	Date: 19/07/19 20:34
	Description: This is a simple calculator.You can use it to finish common compute.This is a demo program.I will going to mprove and perfect it in the next.
*/

#include<iostream>
using namespace std;

welcome(){
	cout<<"WELCOME TO USE THIS CALCULATOR SYSTEM"<<endl;
}

chooseAble(){
	cout<<"+------------------------------+"<<endl;
	cout<<"+-------��ѡ���ܣ�-----------+"<<endl;//Please choose function:
	cout<<"+-------1���ӷ�     2������----+"<<endl;//1��ADD     2��SUB
	cout<<"+-------3���˷�     4������----+"<<endl;//3��MUL     4��DIV
	cout<<"+-------5������     0���˳�----+"<<endl;//5��COM     0��QUIT
	cout<<"+------------------------------+"<<endl;
	cout<<"+------------------------------+"<<endl;
}

add(){
	double a,b,c;
	cout<<"�������һ������";//Please enter the first number:
	cin>>a;
	cout<<"������ڶ�������";//Please enter the second number:
	cin>>b;
	cout<<"���Ϊ��"<<a+b<<endl; //Result is:
}

subtract(){
	double a,b,c;
	cout<<"�������һ������";//Please enter the first number:
	cin>>a;
	cout<<"������ڶ�������";//Please enter the second number:
	cin>>b;
	cout<<"���Ϊ��"<<a-b<<endl; //Result is:
}

multiply(){
	double a,b,c;
	cout<<"�������һ������";//Please enter the first number:
	cin>>a;
	cout<<"������ڶ�������";//Please enter the second number:
	cin>>b;
	cout<<"���Ϊ��"<<a*b<<endl; //Result is:
}

divide(){
	double a,b,c;
	cout<<"�������һ������";//Please enter the first number:
	cin>>a;
	cout<<"������ڶ�������";//Please enter the second number:
	cin>>b;
	cout<<"���Ϊ��"<<a/b<<endl; //Result is:
}

complementation(){
	int a,b,c;
	cout<<"�������һ������";//Please enter the first number:
	cin>>a;
	cout<<"������ڶ�������";//Please enter the second number:
	cin>>b;
	cout<<"���Ϊ��"<<a%b<<endl; //Result is:
}

quit(){
	cout<<"ϵͳ�����˳�...";//The system is quitting...
}

choosed(int n){
	switch(n){
		case 1:
			add();break;
		case 2:
			subtract();break;
		case 3:
			multiply();break;
		case 4:
			divide();break;
		case 5:
			complementation();break;
		case 0:
			quit();break;
	}
}



int main(){
	int n;
	welcome();
	do{
		chooseAble();
		cin>>n;
		choosed(n);
	}while(n);
	
	return 0;
}
