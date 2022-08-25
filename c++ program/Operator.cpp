#include<iostream>
using namespace std;

int main(){
	
	
	//+,-,*,/,% ---> Arithmetic operator
	cout<<5%2<<endl;
	cout<<5+2<<endl;
	cout<<5-2<<endl;
	cout<<5*2<<endl;
	
	//++,--    -----> Unary Operator
	
    int d=3;
    d++;   // post Increament
    cout<<d<<endl;
    
    int count=10;
    count--;  // post decreament
    cout<<count<<endl;
    
    int counter=10;
    cout<<counter++<<endl;  // post decreament ans=10
    
    int num=10;
    cout<<++num<<endl;  // pre Increament ans=11
    cout<<num--<<endl;   // post decreament
    cout<<--num<<endl;
    
    system("cls");  // Above this will not print
    
    // <,>,<=,>=,==,!=    ----> Relational Operator
    
    int a=6, b=4;
    
    cout<< (a>b) <<endl;
    cout<< (a<=b) <<endl;
    
    system("cls");
    
    // &&, ||, !   -------> Logical operator
    
    
    cout<<(a==6 && b==4)<<endl;
    
    system("cls");
    
    // =, +=, -=, *=, /=, %=    --------> Assignment Operator
    
    int x= 5;
    
    x += 7;
    //x = x+7;
    cout<<x;
    
}
