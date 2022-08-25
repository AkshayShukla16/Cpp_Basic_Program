#include<iostream>
using namespace std;
int main(){
	
	int a,b;
	cout<<"Enter Value of a,b :"<<endl;
	cin>>a>>b;
	
	a= a+b;
	b= a-b;
	a= a-b;
	
	cout<<"a= "<<a<<"\nb= "<<b<<endl;
}
