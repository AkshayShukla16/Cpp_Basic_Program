#include<iostream>
using namespace std;

int main(){
	
	int x, y, temp;
	cout<<"Enter the value of x and y :"<<endl;
	cin>>x>>y;
	
	temp = x;
	x=y;
	y=temp;
	
	cout<<"After Swapping Value Of x and y Is:"<<x<<" And "<<y<<endl;
	cout<<"x= "<<x<<"\ny= "<<y<<endl;
	
}
