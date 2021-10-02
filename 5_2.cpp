#include<iostream>
#include<fstream>
int main()
{
	std::ifstream fin;
	char str[40];
	int i=1;
	
	fin.open("ben_stokes.txt", std::ios::in);
	
	while(!fin.eof())
	{
		fin.getline(str,39,'\n');
		fin.clear();
		
		std::cout<<str<<"!";
		
		
	}
	fin.close();
}
