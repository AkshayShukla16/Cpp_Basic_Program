#include<iostream>
using namespace std;

int main(){
	
    int x;
	int num;
	int y=0;
	cout<<"Enter the Numerical value:";
	cin>>num;
	
	while(num!=0){
		
	x=num%10;
	y=y+x;
	num=num/10;
	
	}
	cout<<"The Sum Is: "<<y;
	
}
