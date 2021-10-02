#include<iostream>
#include<fstream>
int main()
{
	std::ifstream fin;
	char ch;
	
	fin.open("rohana.txt");
	while(!fin.eof())
	{
		fin.get(ch );
		std::cout<<ch;
	}
	
}
