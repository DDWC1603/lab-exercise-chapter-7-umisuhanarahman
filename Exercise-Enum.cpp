//umi suhana binti abdul rahman
//a17dw2041

//if the day is sunday, what day is it?
//write your code using enum and Sunday is your default 'day'

#include<iostream>
using namespace std;

enum week {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

int main()
{
	week today;
	today=Sunday;
	cout<<"Hari ke-"<<today+1;
	return 0;

}

