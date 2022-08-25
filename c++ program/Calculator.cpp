#include<iostream>
using namespace std;

int main(){
	
	float num1, num2;
	char operation;
	
	
	cout<<"Calculator"<<endl;
	cout<<"Enter what to calculate: "<<endl;
	cin>>num1>>operation>>num2;
	
	
	
	switch(operation){
		
		case '-': cout<< num1<< operation<< num2<< "="<< num1-num2;
		break;
		
		case '+': cout<< num1<< operation <<num2 << "="<< num1+num2;
		break;
		
		case '*': cout<< num1<< operation <<num2 << "="<< num1*num2;
		break;
		
		case '/': cout<< num1<< operation <<num2 << "="<< num1/num2;
		break;
		
		case '%':
			
			bool IsNum1Int, IsNum2Int;
			IsNum1Int= ((int)num1== num1);
			IsNum2Int= ((int)num2== num2);
			
			if(IsNum1Int && IsNum2Int)
			{
			
				   cout<< num1<< operation <<num2 << "="<< (int)num1 % (int)num2;
			}else 
			cout<<"Not Valid !"<<endl;
			break;
		
		
	}
}
