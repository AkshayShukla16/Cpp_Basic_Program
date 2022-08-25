#include<iostream>
using namespace std;

int main(){
	
	float a,b,c;
	cout<<"Enter the length of triangle:"<<endl;
	cin>>a>>b>>c;
	
	if(a,b,c !=0){
		
		if (a==b && b==c){
			cout<<"Triangle Is Equilateral"<<endl;
		
		}
		else
		if(a==b|| b==c|| c==a ){
			cout<<"Triangle Is Isosceles"<<endl;
		
		}
		else
		if(a!=b && b!=c ){
			cout<<" Triange Is Scalene"<<endl;
		}
	}
	else
	cout<<"You have Enter Number  0 "<<endl;
}

	
	
