#include <iostream>

int main()
{
	bool result = true;
	int i = 2;

	if (i == 1)
		std::cout << result;
	else
		std::cout << !result;
}