#include<iostream>
using namespace std;
//++++++++++++++++++++++++++++++++++++++++++++++ Task 1 function in struct ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//	struct stdname{
//		string firstname;
//		string lastname;
//		int rollno;
//		int marks;
//	void displayStudentinfo(stdname stdname){
//		cout<<"Full Name : "<<stdname.firstname<<" "<<stdname.lastname<<endl;
//		cout<<"Marks : "<<stdname.marks<<endl;
//	}
//	};
//	
//int main(){
//	//first srudnet
//	stdname student1;
//	student1.firstname="Asim";
//	student1.lastname="Ali";
//	student1.rollno=35;
//	student1.marks=88;
//	//second student
//	stdname student2;
//	student2.firstname="Ajmal";
//	student2.lastname="Hussain";
//	student2.rollno=33;
//	student2.marks=98;
//	student1.displayStudentinfo(student1);
//	student2.displayStudentinfo(student2);



//**************************TASK 02*****************************************
//struct stdname{
//		string firstname;
//		string lastname;
//		int rollno;
//		int marks;
//		
//	void displayStudentinfo(){
//		cout<<"Full Name : "<<firstname<<" "<<lastname<<endl;
//		cout<<"Marks : "<<marks<<endl;
//	}
//	};
//	
//int main(){
//	//first srudnet
//	stdname student1;
//	student1.firstname="jawahir";
//	student1.lastname="Ali";
//	student1.rollno=35;
//	student1.marks=88;
//	//second student
//	stdname student2;
//	student2.firstname="kashih";
//	student2.lastname="husain";
//	student2.rollno=33;
//	student2.marks=98;
//	student1.displayStudentinfo();
//	student2.displayStudentinfo();	
//	//array 
//	stdname std_data[2]={student1,student2};
//	for(int i=0; i<2; i++)
//	{
//		std_data[i].displayStudentinfo();
//	}
//}


////+++++++++++++++++++++++++++++++++++++++++++++++++ Task 3 pointer in struct ++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	
	
struct stdname{
		string firstname;
		string lastname;
		int rollno;
		int marks;
		
	void displayStudentinfo(){
		cout<<"Full Name : "<<firstname<<" "<<lastname<<endl;
		cout<<"Marks : "<<marks<<endl;
	}
	};
	
int main()
{
	//first srudnet
	stdname student1;
	student1.firstname="umair";
	student1.lastname="malik";
	student1.rollno=35;
	student1.marks=88;
	//second student
	stdname student2;
	student2.firstname="Ajmal";
	student2.lastname="Hussain";
	student2.rollno=33;
	student2.marks=98;
	cout<<"\nthese are actual values given to variables\n"<<endl;
	student1.displayStudentinfo();
	student2.displayStudentinfo();
	
	//pointer 
	stdname *ptr1=&student1;                              
	stdname *ptr2=&student2;
	cout<<"\nThese are also actual values  using pointers"<<endl;
	cout<<"\nusing pointer\t "<<ptr1->firstname<<endl;              //pointer shows actual values
	cout<<"using pointer\t"<<ptr2->firstname<<endl;
	cout<<"\nUsing functions by pointer\n"<<endl;
	ptr1->displayStudentinfo();//calling function using pointer
	ptr2->displayStudentinfo();
	///changing the values 
	student1.firstname=" Ali Raza";
	student1.lastname="shah ";
	student1.marks=100;
	student1.rollno=01;
	student2.firstname="Zriyab Haider";
	student2.lastname="bukhari";
	student2.marks=00;
	student2.rollno=99;
	cout<<"\nThese are changed firstnames using pointer\n"<<endl;
	cout<<"using pointer "<<ptr1->firstname<<endl;              //pointer shows changed values
	cout<<"using pointer "<<ptr2->firstname<<endl;
	cout<<"\nchanged values by callaing function by pointer\n"<<endl;
	ptr1->displayStudentinfo();
	ptr2->displayStudentinfo();

	}

