#include<iostream>
#include<fstream>
int main()
{
	std::ifstream fin;
	char str[40];
	
	fin.open("rohana_nadaf.txt", std::ios::in);
	while(!fin.eof())
	{
		fin.getline(str,39,'\n');
		std::cout<<str;
	}
	fin.close();
}
