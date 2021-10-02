#include<iostream>
#include<fstream>
struct emp
{
	char name[20];
	int age;
	float basic,gross;
};

int main()
{
	int k;
	emp e1;

	std::ifstream fin;
	fin.open("queen.dat", std::ios::binary);
	
	k=fin.read(reinterpret_cast<char*>(&e1), sizeof(e1));
	
	fin.close();
	std::cout<<e1.name<<"\n"<<e1.age<<"\n"<<e1.basic<<"\n"<<e1.gross;
	
}
