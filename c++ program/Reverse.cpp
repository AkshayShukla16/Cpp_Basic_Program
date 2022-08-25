#include<iostream>
using namespace std;

int main(){
	
    int reverse=0;
	int num;
	cout<<"Enter the Numerical value:";
	cin>>num;
	
	while(num!=0){
	
	reverse=reverse*10;	
	reverse=reverse+num%10;
	num=num/10;
	}
	cout<<"reversed no is: "<<reverse;
	
}
