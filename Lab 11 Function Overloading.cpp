#include<iostream>
//#include<cmath>
using namespace std;
 //FOR ADDITION
float add(int a, int b, int c){
	
	return a+b+c;
}
float add(int a, int b,float c){
	
	return a+b+c;
}
float add(int a,float b,int c){
	
	return a+b+c;
}
float add(float a,int b,int c){
	
	return a+b+c;
}
float add(int a,float b,float c){
	
	return a+b+c;
}float add(float a,float b,int c){
	
	return a+b+c;
}
float add(float a,float b,float c){
	
	return a+b+c;
}
float add(float a,int b,float c){
	
	return a+b+c;
}
// FOR SUBTRACTION
float subtract(int a, int b, int c){
	
	return a-b-c;
}
float subtract(int a, int b,float c){
	
	return a-b-c;
}
float subtract(int a,float b,int c){
	
	return a-b-c;
}
float subtract(float a,int b,int c){
	
	return a-b-c;
}
float subtract(int a,float b,float c){
	
	return a-b-c;
}float subtract(float a,float b,int c){
	
	return a-b-c;
}
float subtract(float a,float b,float c){
	
	return a-b-c;
}
float subtract(float a,int b,float c){
	
	return a-b-c;
}
// FOR MULTIPLICATION
float mult(int a, int b, int c){
	
	return a*b*c;
}
float mult(int a, int b,float c){
	
	return a*b*c;
}
float mult(int a,float b,int c){
	
	return a*b*c;
}
float mult(float a,int b,int c){
	
	return a*b*c;
}
float mult(int a,float b,float c){
	
	return a*b*c;
}float mult(float a,float b,int c){
	
	return a*b*c;
}
float mult(float a,float b,float c){
	
	return a*b*c;
}
float mult(float a,int b,float c){
	
	return a*b*c;
}
float Div(int a, int b){
	
	return a/b;
}

int main()
{ 
    float num1,num2,num3;
    cout<<"Enter the three numbers for Addition,Subtraction and Multiplication :";
    cin>>num1>>num2>>num3;
    float Sum=add(num1,num2,num3);
	cout<<"\nAddition of "<<num1<<","<<num2<<" and "<<num3<<" is = "<<Sum<<endl;
    float Minus=subtract(num1,num2,num3);
	cout<<"Subtraction of "<<num1<<","<<num2<<" and "<<num3<<" is = "<<Minus<<endl;
	float Multplication=mult(num1,num2,num3);
	cout<<"Multplication of "<<num1<<","<<num2<<" and "<<num3<<" is = "<<Multplication<<endl;
	float x,y;
	cout<<"\nEnter the two numbers for Division :";
	cin>>x>>y;
	float Division=Div(x,y);
	cout<<"\nDivision of "<<x<<" and "<<y<<" is = "<<Division<<endl;
	return 0;
}
//
// &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
//int sum_of_num(int N){
//	
//		if(N==0){
//		
//		return 0;
//        }
//	  
//	  int add=N+sum_of_num(N-1);
//	  return add;
//	}
//	
//int main(){
//	int N;
//	cout<<"Enter the 'N' number:";
//	cin>>N;
//   int sum= sum_of_num(N);
//	cout<<"\nSum of 'N' number is = "<<sum;
//
//	return 0;
//}


// &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
 
// void swap(int &num1, int &num2){
// 	
// 	num1=20;
// 	num2=10;
// 	
// }
//
//int main(){
//	int a=10,b=20;
//	cout<<"Value of 'a' before swapping:"<<a<<endl;
//	cout<<"Value of 'b' before swapping:"<<b<<endl;
//	swap(a,b);
//	
//	cout<<"\nValue of 'a' after swapping:"<<a<<endl;
//	cout<<"Value of 'b' after swapping:"<<b<<endl;
//	
//	return 0;
//}
//
//     //  OR   //
//
//void swap(int &a, int &b){
//	
//	int temp=a;
//	a=b;
//	b=temp;
//}
//int main(){
//	
//	int a=10,b=20;
//	cout<<"Value of 'a' before swapping:"<<a<<endl;
//	cout<<"Value of 'b' before swapping:"<<b<<endl;
//	swap(a,b);
//	cout<<"\nValue of 'a' after swapping:"<<a<<endl;
//	cout<<"Value of 'b' after swapping:"<<b<<endl;
//	
//	return 0;	
//}
//
//
//// &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
//

