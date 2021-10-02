#include<iostream>
#include<fstream>
#include<conio.h>
int main()
{
	std::ifstream fin;
	char ch;
	
	fin.open("rohana.txt");
	while(!fin.eof())
	{
		ch=fin.get();
		
		std::cout<<ch<<'b';
	}
	std::cout<<'a';
	getch();
	std::cout<<'a';
}
