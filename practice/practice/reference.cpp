#include <iostream>
#include <utility>

std::pair <int, int>swapex(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	return { a,b };
}

void swap1(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

void swap2(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void swap3(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int a = 5, b = 10;
	std::pair<int, int>result = swapex(a, b);
	std::cout << result.first << " " << result.second << std::endl;

	a = 5, b = 10;
	swap1(a, b);
	std::cout << a << " " << b << std::endl;

	a = 5, b = 10;
	swap2(a, b);
	std::cout << a << " " << b << std::endl;

	a = 5, b = 10;
	swap3(&a, &b);
	std::cout << a << " " << b << std::endl;
}