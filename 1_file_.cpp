#include<iostream>
#include<fstream>
#include<conio.h>

int main()
{
	char ch;
	std::ifstream infile;
	infile.open("rohana.txt");
	while(!infile.eof())
	{
		infile.get(ch);
		std::cout<<ch;
		
	}
	infile.close();
}
