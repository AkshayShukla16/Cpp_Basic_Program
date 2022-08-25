#include<iostream>
using namespace std;

int main(){
	
	int counter=0;
	int num;
	cout<<"Enter the Numerical value:";
	cin>>num;
	
	if(num==0){
		cout<<"You have enter 0."<<endl;
	}
	else
	while(num>0){
		
	num=num/10;
	counter++;
	
	}
	cout<<"No. of digit In Value Is:"<<counter<<endl;
}
