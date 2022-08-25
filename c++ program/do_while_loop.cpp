#include<iostream>
using namespace std;

int main(){
	
	int UserPin=7654, pin,errorcounter=0;
	
	do{
		cout<<"Enter pin:";
		cin>>pin;
		if(pin!=UserPin)
		errorcounter++;
		
	}while(errorcounter<3 && pin!=UserPin);
	
	if(errorcounter<3){
	
	cout<<"Application Loading...";
	}else
	
	cout<<"blocked";
}
