//umi suhana bt abdul rahman
//a17dw2041

//compare two strings
//complete the program below. 

#include <iostream>
using namespace std;

int main()
{

	string myName="Hana";//write your name there.
	//make a while loop until user input 'quit' to exit/end the program

	while(true)
	{
		
		string userName;
		
		cout<<"Enter your username: ";
		cin>>userName;   //get the user input for string.
		if(userName=="Abu")
	    {
			cout<<"Hey Abu, welcome back!"<<endl;
		}
		else if(userName=="quit")
		{
			cout<<endl;
			break;
		}
		else if(userName!=myName)
		{
			cout<<"Hello "<<userName<<endl;
		}
		else
		{
			cout<<"Aha! its you "<<myName<<endl;
		}
	}
	return 0;
}
