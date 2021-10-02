#include<iostream>
int main()
{
	int x;
	std::istream &stream=std::cin>>x; 
	bool readok=!stream.fail();
	std::cout<<readok;
	if(readok)
	{
		std::cout<<x;
	}
	
}
