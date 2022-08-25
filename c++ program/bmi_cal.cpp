#include<iostream>
using namespace std;

int main(){
	
	float w,h;
	cout<<"Enter Your Weight(kg) and Height(m): "<<endl;
	cin>>w>>h;
	
	float BMI= w / (h * h);
	
	if(BMI<=18.5)
		cout<<"You are Underweight"<<endl;
	
	else if(BMI>=25)
	    	cout<<"You are Overweight"<<endl;
		else
		cout<<"You are in Normal"<<endl;
		
		cout<<"Your BMI Is: "<<BMI<<endl;
}
