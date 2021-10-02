#include<stdio.h>
enum color
{
	pink,grey,blue
};

int main()
{
	enum color c1,c2;
	c1=0;
	c2=blue;
	printf("%d,%d",c1,c2);
}
