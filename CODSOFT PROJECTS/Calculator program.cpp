#include<iostream>
using namespace std;
class Calculator{
	public :
		int add(int a,int b)
		{
			return a+b;
		}
		int sub(int a,int b)
		{
			return a-b;
		}
     	int multi(int a, int b)
	    {
	 	return a*b;
	    }
	    float divide(int a,int b)
	    {
	    return static_cast<float>(a) / b;
		}
};
int main(){
	Calculator cal;
	int num1;
	int num2;
	cout<<"Enter Any Two Numbers :"<<endl;
	cin>>num1;
	cin>>num2;
	int sum = cal.add(num1,num2);
	int difference = cal.sub(num1,num2);
	int product = cal.multi(num1,num2);
	float quotient = cal.divide(num1,num2);
	cout<<"Sum is:"<<sum<<endl;
	cout<<"Difference is:"<<difference<<endl;
	cout<<"Product is:"<<product<<endl;
	cout<<"Quotient is:"<<quotient<<endl;
	
	return 0;
}
