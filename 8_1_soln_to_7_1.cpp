#include<iostream>
#include<fstream>
int main()
{
	std::ifstream fin;
	char ch;
	
	fin.open("rohana.txt");
	while(fin>>ch)
	{
		
		std::cout<<ch;
	}
	
}
