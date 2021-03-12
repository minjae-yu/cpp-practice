#include <iostream>

int main()
{
	//static memory allocation
	int arr[5] = { 1,2,3,4,5 };
	int* pr = arr;

	std::cout << sizeof(arr[0]) << std::endl;
	std::cout << arr << " " << arr[1] << std::endl;//arr+n or arr[n]
	std::cout << pr << std::endl;

	//dynamic memory allocation
		// c version
		// malloc / free
		// malloc = memory allocation

	int* p12 = new int[10];//dynamic memory allocation은 포인터만?? -> 메모리 주소에 할당해야하기때문에?
	delete p12;

	int n;
	std::cin >> n;
	p12 = new int[n];
	delete p12;

	//pointer arithmetic
	int i = 10;
	int* pi = &i;
	std::cout << pi << std::endl;//결과값이 출력이 안된다
}