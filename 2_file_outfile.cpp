#include<iostream>
#include<fstream>
#include<conio.h>

int main()
{
	char ch;
	
	std::ifstream infile;
	infile.open("rohana.txt");
	
	std::ofstream outfile;
	outfile.open("vicky/vicky.txt");
	
	while(infile)
	{
		infile.get(ch);
		outfile.put(ch);
		
	}
	
	infile.close();
	outfile.close();
}
