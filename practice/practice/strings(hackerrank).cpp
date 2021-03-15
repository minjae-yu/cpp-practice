#include <iostream>
#include <string>

void swap(std::string& s, std::string& s2)
{
	std::string temp;
	temp[0] = s[0];
	s[0] = s2[0];
	s2[0] = temp[0];
}

int main()
{
	std::string a;//abcd
	std::string b;//ef
	std::string c;

	std::cin >> a;
	std::cin >> b;

	c = a + b;

	std::cout << a.size() << " " << b.size() << std::endl;
	std::cout << c << std::endl;

	swap(a, b);

	std::cout << a << " " << b << std::endl;
}
