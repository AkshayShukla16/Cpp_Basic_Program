#include<iostream>
using namespace std;

int main(){
	
	float num1, num2;
	char op;  // op= +,-,*,/,%
	
	cout<<"Calculator"<<endl;
	cout<< "Enter what to calculate"<<endl;
	cin>> num1>> op>> num2;
	
	switch(op){
		
		case '-': cout<<num1 <<op << num2 <<"=" << num1-num2;
		break;
		
		case '+': cout<<num1 <<op << num2 <<"=" << num1+num2;
		break;
		
		case '*': cout<<num1 <<op << num2 <<"=" << num1*num2;
		break;
		
		case '/': cout<<num1 <<op << num2 <<"=" << num1/num2;
		break;
		
		case '%':
			
			bool IsNum1Int, IsNum2Int;
			IsNum1Int= ((int)num1==num1);
			IsNum2Int=  ((int)num2==num2);
			
			if(IsNum1Int && IsNum2Int)
			cout<<num1 <<op << num2<< "="<< (int)num1 % (int)num2;
			else
			cout<<"Invalid"<<endl;
			
			break;
			
			default : cout<<"No a valid operator";
			
	} 
	
}
