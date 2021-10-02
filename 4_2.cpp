#include<iostream>
#include<fstream>
int main()
{
	std::ifstream fin;
	char ch;
	
	fin.open("rohana.txt");
	while(!fin.eof())
	{
		ch=fin.get();
		std::cout<<ch;
	}
	
}
