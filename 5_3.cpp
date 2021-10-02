#include<iostream>
#include<fstream>
#include<conio.h>
int main()
{
	std::ifstream fin;
	char str[40];
	int i=1;
	
	fin.open("ben_stokes.txt", std::ios::in);
	
	while(!fin.eof())
	{
		fin.clear();
		fin.getline(str,39,'\n');
		
		std::cout<<str<<'!';
		getch();
			
	}
	fin.close();
}
