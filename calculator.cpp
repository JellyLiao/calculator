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
	cout<<"+-------请选择功能：-----------+"<<endl;//Please choose function:
	cout<<"+-------1、加法     2、减法----+"<<endl;//1、ADD     2、SUB
	cout<<"+-------3、乘法     4、除法----+"<<endl;//3、MUL     4、DIV
	cout<<"+-------5、求余     0、退出----+"<<endl;//5、COM     0、QUIT
	cout<<"+------------------------------+"<<endl;
	cout<<"+------------------------------+"<<endl;
}

add(){
	double a,b,c;
	cout<<"请输入第一个数：";//Please enter the first number:
	cin>>a;
	cout<<"请输入第二个数：";//Please enter the second number:
	cin>>b;
	cout<<"结果为："<<a+b<<endl; //Result is:
}

subtract(){
	double a,b,c;
	cout<<"请输入第一个数：";//Please enter the first number:
	cin>>a;
	cout<<"请输入第二个数：";//Please enter the second number:
	cin>>b;
	cout<<"结果为："<<a-b<<endl; //Result is:
}

multiply(){
	double a,b,c;
	cout<<"请输入第一个数：";//Please enter the first number:
	cin>>a;
	cout<<"请输入第二个数：";//Please enter the second number:
	cin>>b;
	cout<<"结果为："<<a*b<<endl; //Result is:
}

divide(){
	double a,b,c;
	cout<<"请输入第一个数：";//Please enter the first number:
	cin>>a;
	cout<<"请输入第二个数：";//Please enter the second number:
	cin>>b;
	cout<<"结果为："<<a/b<<endl; //Result is:
}

complementation(){
	int a,b,c;
	cout<<"请输入第一个数：";//Please enter the first number:
	cin>>a;
	cout<<"请输入第二个数：";//Please enter the second number:
	cin>>b;
	cout<<"结果为："<<a%b<<endl; //Result is:
}

quit(){
	cout<<"系统正在退出...";//The system is quitting...
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
