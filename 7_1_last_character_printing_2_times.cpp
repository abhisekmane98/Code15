#include<iostream>
#include<fstream>
int main()
{
	std::ifstream fin;
	char ch;
	
	fin.open("rohana.txt");
	while(!fin.eof())
	{
		std::cout<<(fin>>ch);
		std::cout<<" "<<ch;
	}
	long int k=strtol("0x6ffd00",nullptr,16);           
	std::cout<<k<<" ";
}
