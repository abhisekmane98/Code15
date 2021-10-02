#include<iostream>
#include<conio.h>
int main()
{
	int x=4;
	std::cout<<&x<<"\n";
	
	int &r=x;
	
	std::cout<<(void*)&r;
	getch();
}
