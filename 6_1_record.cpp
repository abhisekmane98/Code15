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
	emp e1={"rohana", 16, 3300, 7000};
	
	std::ofstream fout;
	fout.open("queen.dat", std::ios::binary);
	
	fout.write(reinterpret_cast<const char*>(&e1), sizeof(e1));
	fout.close();
	
}
