#include<iostream>
using namespace std;

int main(){

    int Host, Guest;
    cout<<"Host Enter: "<<endl;
    cin>>Host;
    
    system("cls");
    cout<<"Guest Enter: "<<endl;
    cin>>Guest;
    
   /* if(Host== Guest)
    cout<<"Right! You are Genius"<<endl;
    else
    cout<<"Failed"<<endl;*/
    
    
    // Upper one is also right code now we are doing with ternary operator
	
	 (Host== Guest)? cout<<"Right! You are Genius":cout<<"Failed!";
}
