#include<iostream>
#include<fstream>
int main()
{
	std::ifstream fin;
	fin.open("Vicky/a.txt", std::ios::in);
	
	char ch;
	
	std::cout<<(fin.eof())<<"\n";
	
	fin>>ch;
	std::cout<<(fin.eof())<<" "<<ch<<"\n";
	std::cout<<(fin.eof())<<" "<<ch<<"\n";
	
	fin>>ch;
	std::cout<<(fin.eof())<<" "<<ch<<"\n";
	
	fin>>ch;
	std::cout<<(fin.eof())<<" "<<ch<<"\n";
}
