#include <iostream>

int main()
{
	int i = 5;
	int* pi = &i;//address of i

	int& ri = i; //reference to i

	std::cout << ri << std::endl;

	std::cout << *pi << std::endl;
	std::cout << &i << std::endl;
	std::cout << &pi << std::endl;//(int* i)*
}

/*
	declaration	vs	use

*	ptr				dereference
&	reference		address
*/