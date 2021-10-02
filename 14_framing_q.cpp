#include<iostream>
int main()
{
	int x;
	std::cout<<(void*)nullptr<<"\n";
	
	std::cin.clear();
	std::cin.ignore();
	
	if(std::cin>>x)
	{
		std::cout<<"inside the if-block\n";
	}
}
