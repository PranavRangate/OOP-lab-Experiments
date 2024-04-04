#include<iostream>
#include<string.h>
using namespace std;

class Person{
	public:
	string name;
	int age;
	
};

class Student : public Person{
	public :
	string PRN_No;
	string Collage_Name;
	
	void setData(){
		
		cout<<"Enter the name of Student : ";
		cin>>name;
		cout<<"Enter the age of Student : ";
		cin>>age;
		cout<<"Enter the PRN_No of Student : ";
		cin>>PRN_No;
		cout<<"Enter the Collage_Name of Student : ";
		cin>>Collage_Name;
		
	}
	
	void getData(){
		
		cout<<"Name of Student : ";
		cout<<name<<endl;
		cout<<"Age of Student : ";
		cout<<age<<endl;
		cout<<"PRN_No of Student : ";
		cout<<PRN_No<<endl;
		cout<<"Collage_Name of Student : ";
		cout<<Collage_Name<<endl;
		
	}
	
	
};

class Employee : public Person{
	public :
	string Emp_Id_No;
	string Position;
	
	void setData(){
		
		cout<<"Enter the name of Employee : ";
		cin>>name;
		cout<<"Enter the age of Employee : ";
		cin>>age;
		cout<<"Enter the Emp_Id of Employee : ";
		cin>>Emp_Id_No;
		cout<<"Enter the Position of Employee : ";
		cin>>Position;
		
	}
	
	void getData(){
		
		cout<<"Name of Student : ";
		cout<<name<<endl;
		cout<<"Age of Student : ";
		cout<<age<<endl;
		cout<<"Emp_Id of Student : ";
		cout<<Emp_Id_No<<endl;
		cout<<"Position of Student : ";
		cout<<Position<<endl;
		
	}
	
};

int main(){
	
	Student s1; 
	cout<<"Enter the information of Student : "<<endl<<endl;
	s1.setData();
	cout<<endl;
	
	Employee e1;
	cout<<"Enter the information of Employee : "<<endl<<endl;
	e1.setData();
	cout<<endl<<endl;
	
	cout<<"Information of Student :"<<endl;
	s1.getData();
	cout<<endl;
	cout<<"Information of Employee :"<<endl;
	e1.getData();
}
