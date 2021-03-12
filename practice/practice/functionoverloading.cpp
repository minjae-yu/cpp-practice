#include<iostream>

int number(int a, int b)
{
	return a + b;
}

float number(float a, float b, float c = 0)
{
	return a + b + c;
}

int main()
{
	int result = number(2, 3);
	float result2 = number(1.2f, 2.8f);
	std::cout << result << " " << result2;
}