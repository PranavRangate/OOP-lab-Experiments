#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    virtual void setData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    virtual void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Customer : virtual public Person {
public:
    string Cus_ID;

    void setData() override {
        Person::setData();
        cout << "Enter Customer ID: ";
        cin >> Cus_ID;
    }

    void display() override {
        Person::display();
        cout << "Customer ID: " << Cus_ID << endl;
    }
};

class Employee : virtual public Person {
public:
    string Emp_ID;

    void setData() override {
        Person::setData();
        cout << "Enter Employee ID: ";
        cin >> Emp_ID;
    }

    void display() override {
        Person::display();
        cout << "Employee ID: " << Emp_ID << endl;
    }
};

class EmployeeCustomer : public Employee, public Customer {
public:
    string ec_ID;

    void setData() override {
    	cout<<"Enter Employee info :"<<endl;
        Employee::setData();
        cout<<endl<<"Enter Customer info :"<<endl;
        Customer::setData();
        cout <<endl<< "Enter EmployeeCustomer ID: ";
        cin >> ec_ID;
    }

    void display() override {
    	cout<<endl<<endl<<"Employee info :"<<endl;
        Employee::display();
        cout<<endl<<"Customer info :"<<endl;
        Customer::display();
        cout <<endl<< "EmployeeCustomer ID: " << ec_ID << endl;
    }
};

int main() {
    Person p;
    Customer c;
    Employee e;
    EmployeeCustomer ec;

    Person* ptr;
    
    ptr = &ec;
    ptr->setData();
    ptr->display();

    return 0;
}

