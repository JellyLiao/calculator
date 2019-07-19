/*
	Name: Simple calculator
	Copyright: JellyLiao
	Author: JellyLiao
	Date: 19/07/19 23:57
	Description: This is a simple calculator.You can use it to finish common compute.This is a demo program.
	I will going to mprove and perfect it in the next.This program is built by C.
*/


#include<stdio.h>
#include<math.h>

welcome(){
	printf("WELCOME TO USE THIS CALCULATOR SYSTEM\n");
}

chooseFunction(){
	printf("+-----------------------------------+\n");
	printf("+-----Please choose function...-----+\n");//请选择功能：
	printf("+-----1.ADD          2.SUB     -----+\n");//1、加法     2、减法
	printf("+-----3.MUL          4.DIV     -----+\n");//3、乘法     4、除法
	printf("+-----5.COM          0.QUIT    -----+\n");//5、求余     0、退出
	printf("+-----------------------------------+\n");
	printf("+-----------------------------------+\n");
}

add(){
	float a,b,c;
	printf("Please enter the first number:\n");//请输入第一个数：
	scanf("%f",&a);
	printf("Please enter the second number:\n");//请输入第二个数：
	scanf("%f",&b);
	c=a+b;
	printf("Result is: %f\n",c);//结果为：
}

subtract(){
	float a,b,c;
	printf("Please enter the first number:\n");//请输入第一个数：
	scanf("%f",&a);
	printf("Please enter the second number:\n");//请输入第二个数：
	scanf("%f",&b);
	c=a-b;
	printf("Result is: %f\n",c);//结果为：
} 

multiply(){
	float a,b,c;
	printf("Please enter the first number:\n");//请输入第一个数：
	scanf("%f",&a);
	printf("Please enter the second number:\n");//请输入第二个数：
	scanf("%f",&b);
	c=a*b;
	printf("Result is: %f\n",c);//结果为：
} 

divide(){
	float a,b,c;
	printf("Please enter the first number:\n");//请输入第一个数：
	scanf("%f",&a);
	printf("Please enter the second number:\n");//请输入第二个数：
	scanf("%f",&b);
	c=a/b;
	printf("Result is: %f\n",c);//结果为：
} 

complementation(){
	float a,b,c;
	printf("Please enter the first number:\n");//请输入第一个数：
	scanf("%f",&a);
	printf("Please enter the second number:\n");//请输入第二个数：
	scanf("%f",&b);
	c=fmod(a,b);
	printf("Result is: %f\n",c);//结果为：
} 
quite(){
	printf("SYSTEM IS EXITTING...");//系统正在退出...
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
			quite();break;
		default:
			printf("Enter a ERROR number!");break;//输入了一个错误数字 
	}
}

int main(){
	int n;
	welcome();
	do{
		chooseFunction();
		scanf("%d",&n);
		choosed(n);
	}while(n);
}
