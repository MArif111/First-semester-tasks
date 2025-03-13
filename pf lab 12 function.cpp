#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
//int main()
//   
//{
//   int squroot,absolute,sinX,cosX,Pow_X;
//    cout<<"enter number to find square root:";
//    cin>>squroot;
//    cout<<"squroot is:"<<sqrt(squroot)<<endl;
//    cout<<"enter a number to find cube  :";
//    cin>>Pow_X;
//    cout<<"the cube of number is:"<<pow(Pow_X,3)<<endl;
//    cout<<"enter the cos angle:";
//    cin>>cosX;
//    cout<<"the cosX is ="<<cos(cosX)<<endl;
//    cout<<"enter the sinX :";
//    cin>>sinX;
//    cout<<"the sinX is ="<<sin(sinX)<<endl;
//    cout<<"Enter the number to find the absolute value: ";
//    cin>>absolute;
//    cout<<"the absolute of number is:"<<abs(absolute)<<endl;
//    
//    
//}
//==========================================================
//void printmessage()
//{
//	cout<<"Hello, Welcome to C++ Functions!";
//	
//}
//int main()
//{
//		printmessage();
//
//    return 0;
//}

//================================================
//void compare(int x)
//{
//	if(x%2==0){
//		cout<<"Even";
//	}
//	else{
//		cout<<"Odd";
//	}
//}
//int main()
//{
//	int num1;
//	cout<<"Enter the number:";
//	cin>>num1;
//	compare(num1);	
//    
//   return 0;
//}
		
//================================================		

	
//int fact(int n){
//	int fact=1;
//	for(int i=n;i>0;i--){
//	
//	fact*=i;
//	}
//	return fact;
//}
//
//int main(){
//	
//	int n;
//	cout<<"Enter a number to calculate a factorial:";
//	cin>>n;
//	int result=fact(n);
//	cout<<"Factorial of "<<n<<" is = "<<result;
//}	
	
//========================================	
	
	
//int add(int a,int b){
//	int result= a + b;
//	cout<<"Sum is = "<<result;
//	return result;
//}
//int subt(int a,int b){
//	int result= a - b;
//	cout<<"Subtraction is = "<<result;
//	return result;
//}
//int mult(int a,int b){
//	int result= a * b;
//	cout<<"Multiplication is = "<<result;
//	return result;
//}
//int div(int a,int b){
//    int result= a / b;
//	cout<<"Division is = "<<result;
//	return result;
//}
//
//int main()
//{
//    cout<<"\tSimple Calculator\n\n";
//	cout<<"   =>Addition\n";
//	cout<<"   =>Subtraction\n";
//	cout<<"   =>Multiplication\n";
//	cout<<"   =>Division\n";
//
//	char choose;
//do{
//	int num1,num2;
//	cout<<"\nEnter the two numbers:";
//	cin>>num1>>num2;
//
//	cout<<" Press '1' for Addition.\n";
//	cout<<" Press '2' for Subtraction.\n";
//	cout<<" Press '3' for Multiplication.\n";
//	cout<<" Press '4' for Division.\n";
//	cout<<" Press '5' for Exit.";
//	int choice;
//	cout<<"\nEnter your choice:";
//	cin>>choice;
//	switch(choice)
//	{
//		case 1:
//			add(num1,num2);
//			break;
//		
//		case 2:
//			subt(num1,num2);
//			break;
//		
//		case 3:
//		    mult(num1,num2);
//			break;
//		
//		case 4:
//		    div(num1,num2);
//			break;
//		
//		case 5:
//			
//			return 0;
//		    break;	
//		default:
//			cout<<"Invalid Input.";
//			break;
//	
//	}
//	cout<<"\n\nDo you want to perform more calculations (Press 'Y' for Yes and 'N' for No ):";
//	cin>>choose;
//	
//}while(choose=='Y');
//	
// return 0;	
//}	
	



//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&

double final(double total){
	double tax=0.10;   //10% Service charge
	
	return total+(total*tax);
	
}
double price(double quantity,double items_price){
		return quantity*items_price;
}
  void display_Menu(){
			cout<<"\t\t Menu\n\n";
			cout<<" \t => Anda Paratha(Rs.50)"<<endl;
			cout<<" \t => Nan Channy(Rs.80)"<<endl;
		    cout<<" \t => Siri Paye(Rs.170)"<<endl;
		    cout<<" \t => Karak Chai(Rs.200)"<<endl;
		    cout<<" \t => Fried Egg(Rs.160)"<<endl;
		    
		    cout<<"\n  Choose Your  menu."<<endl;
		    cout<<"  Press '1' for Anda Paratha"<<endl;
			cout<<"  Press '2' for Nan Channy"<<endl;
		    cout<<"  Press '3' for Siri Paye"<<endl;
		    cout<<"  Press '4' for Karak Chai"<<endl;
		    cout<<"  Press '5' for Fried Egg"<<endl;
		    cout<<"  Press '6' for Exit."<<endl; 
		    
  }
int main(){
	char ch;
	double total_bill=0.0;
	do{
      display_Menu();
      	int choice,quantity;
	
	double items_price;
	double items_cost;
      cout<<"\n\tEnter your choice:";
           cin>>choice;
       switch(choice)
           {
           	case 1:
                cout<<setw(70)<<setfill(' ')<<"\n\tWhat amount of Anda Paratha would you like to order :";
           		cin>>quantity;
           		 items_price=50;
           	     items_cost=price(quantity,items_price);
           	     total_bill+=items_cost;
           	    break;
           	case 2:
                cout<<setw(70)<<setfill(' ')<<"\n\tWhat amount of Nan Channy would you like to order :";
           		cin>>quantity;
          	     items_price=80;
          	     items_cost=price(quantity,items_price);
          	     total_bill+=items_cost;
           	    break;
           	case 3:
           		cout<<setw(70)<<setfill(' ')<<"\n\tWhat amount of Siri Paye would you like to order :";
           		cin>>quantity;
                 items_price=170;
                 items_cost=price(quantity,items_price);
                 total_bill+=items_cost;
           	    break;
           	case 4:
           		cout<<setw(70)<<setfill(' ')<<"\n\tWhat amount of Karak Chai would you like to order :";
           		cin>>quantity;
           	     items_price=200;
           	     items_cost=price(quantity,items_price);
           	     total_bill+=items_cost;
           	    break;
           	    
           	case 5:
           		cout<<setw(70)<<setfill(' ')<<"\n\tWhat amount of Fried Egg would you like to order :";
          		cin>>quantity; 
           	     items_price=160;
           	     items_cost=price(quantity,items_price);
           	    total_bill+=items_cost;
           	    break;
           	    
           	case 6:
           		
           		continue;
				break;  
				
			default:
			    cout<<"\n\tInvalid input.";	 
				exit(0);
           	}
		    cout<<"\n\tDo you want to order something else (Press 'Y' or 'y' for Yes OR 'N' or 'n' for No): ";
		    cin>>ch;
		}while(ch=='Y' || ch=='y');
		    if(total_bill>0){
		    	double final_bill=final(total_bill);
		    	cout<<"\n\t\t\t\t====== Final Bill ======\n\n";
		    	cout<<"\t\t\tSubtotal:$"<<fixed<<setprecision(2)<<total_bill<<endl;
		    	cout<<"\t\t\tService Charge(10%):$"<<fixed<<setprecision(2)<<total_bill*0.10<<endl;
		    	cout<<"\t\t\tTotal Amount:$"<<fixed<<setprecision(2)<<final_bill<<endl;
			}else{
				cout<<"\n\tNo items ordered.Thank you!\n";
			}
	return 0;
}











	
	
	
	
	
	
	
	
	
	
	
	
	
 
