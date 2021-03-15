#include <iostream>

class Box
{
private:
	int l;
	int b;
	int h;
public:
	Box()
	{
		int l = 0;
		int b = 0;
		int h = 0;
	}

	Box(int length, int breadth, int height)
	{
		l = length;
		b = breadth;
		h = height;
	}

	Box(const Box& B)//copy constructor
	{
		l = B.l;
		b = B.b;
		h = B.h;
	}

	int getLength()
	{
		return l;
	}

	int getBreadth()
	{
		return b;
	}

	int getHeight()
	{
		return h;
	}

	long long CalculateVolume()
	{
		long long volume = l * b * h;
		return volume;
	}

	bool operator<(Box B)//b1 < b2
	{
		if (l < B.l)
			return true;
		else if ((b < B.b) && (l == B.l))
			return true;
		else if ((h < B.h) && (b == B.b) && (l == B.l))
			return true;
		else
			return false;
	}

	friend std::ostream& operator<<(std::ostream& os, Box& B);
};

std::ostream& operator<<(std::ostream& os, Box& B)
{
	os << B.l << " " << B.b << " " << B.h;
	return os;
}

int main()
{
	Box b1;
	Box b2(2, 3, 4);
	b2.getLength();
	b2.getBreadth();
	b2.getHeight();
	b2.CalculateVolume();
	bool x = (b1 < b2);
	std::cout << b2;

	//Box b3(b1); copy constructor 부르는 방법
}