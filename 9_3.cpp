#include<iostream>
int main()
{
	int x;
	std::cin>>x; 
	bool readok=!std::cin.fail();
	std::cout<<readok;
	
	
}
