#include<iostream>
#include<fstream>
#include<conio.h>
int main()
{
	std::ofstream fout;
	fout.open("rohana.txt");
	char ch='a';
	fout.put(ch);
	fout<<"I want to do breakfast with you and spend time with you\n";
	fout.close();
}
