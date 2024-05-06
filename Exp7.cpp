#include<iostream>
using namespace std;

class complex{
	double real;
	double imag;
	
	public:
		
	complex(){
		real=0;
		imag=0;
	}
	complex(double a,double b){
		real=a;
		imag=b;
	}
	//copy constructor
	complex(const complex &t){   
		real=t.real;
    	imag=t.imag;
	}
	
	complex operator+(complex &cmp)
	        {
	        	complex temp;
	        	temp.real=this->real+cmp.real;
	        	temp.imag=this->imag+cmp.imag;
	        	return temp;
			}
			
	complex operator-(complex &c)
	        {
	        	complex temp;
	        	temp.real=this->real-c.real;
	        	temp.imag=this->imag-c.imag;
	        	return temp;
			}
	friend ostream& operator<<(ostream &os,complex &cm)
	        {
	        	os<<cm.real<<" + "<<cm.imag;
	        	return os;
			}
};


int main()
{
	
	complex c1(4,5);
	complex c2(2,3);
	
	complex sum= c1 + c2;
	complex diff=c1 - c2;
	
	cout<<"sum = "<<sum<<"i"<<endl;
	cout<<"difference ="<<diff<<"i";
	
}