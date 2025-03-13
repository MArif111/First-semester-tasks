#include<iostream>
#include<cmath>
using namespace std;
    //************ TASK 01 *****************
    
//int main(){
//	
//	int a=10;
//	int* ptr;
//	ptr=&a;
//	cout<<"Value of pointer is = "<<*ptr;
//
//return 0;
//}

   //*************************  TASK 02  ********************

//  int main(){
//  	
//  	int a=10;
//  	cout<<"Value of 'a' before changing is = "<<a;
//  	int* ptr;
//  	ptr=&a;
//  	*ptr=20;
//  	cout<<"\n\nThe new value of 'a' is = "<<a;
// return 0;
//  }

   //****************   TASK 03  ********************

 int main(){
 	
 	int arr[3]={10,20,30};
 	int* ptr;
 	ptr=arr;
 	for(int i=0;i<3;i++){
 		
 		cout<<* ptr<<" ";
 		ptr++;
	 }
return 0;	
 }

   //*******************    TASK 04   **************
   
//   int swap(int* ptr1, int* ptr2){
//   	
//   	*ptr1=20;
//   	*ptr2=10;
//   }
//   
//   int main(){
//	int a=10,b=20;
//	cout<<"Value of 'a' before swapping:"<<a<<endl;
//	cout<<"Value of 'b' before swapping:"<<b<<endl;
//	swap( &a, &b );
//	cout<<"\nValue of 'a' after swapping:"<<a<<endl;
//   	cout<<"Value of 'b' after swapping:"<<b<<endl;
//	return 0;
//   }

   // *********************  TASK 05  *******************
   
//   int main(){
//   
//   int *ptr1=NULL;
//   if (ptr1=NULL){
//   	
//   	cout<<"It is Null Pointer that it does not point to any valid memory.";
//   	
//   }else{
//   cout<<"The pointer holds the memory address:"<<ptr1<<endl;
//   }
//return 0;
//}

    // ********************  TASK 06  ******************************

//int main(){
//
//  void *ptr;
//  int a=10;
//  ptr=&a;
//  *(int*)ptr;
//  cout<<*(int*)ptr<<endl;
//
//return 0;
//}













