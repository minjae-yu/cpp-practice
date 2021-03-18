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
		l = 0;//int l = 0;
		b = 0;//int b = 0;
		h = 0;//int h = 0;
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
		return (long long)l * b * h;
		//long long volume = l * b * h;
		//return volume;
	}

	friend bool operator<(Box& A, Box& B);
	friend std::ostream& operator<<(std::ostream& os, Box& B);
};

bool operator<(Box& A, Box& B)
{
	if (A.l < B.l)
		return true;
	else if ((A.b < B.b) && (A.l == B.l))
		return true;
	else if ((A.h < B.h) && (A.b == B.b) && (A.l == B.l))
		return true;
	else
		return false;
}

std::ostream& operator<<(std::ostream& os, Box& B)
{
	os << B.l << " " << B.b << " " << B.h;
	return os;
}

/*int main()
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
}*/


void check2()
{
	int n;
	std::cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		std::cin>>type;
		if(type ==1)
		{
			std::cout<<temp<< std::endl;
		}
		if(type == 2)
		{
			int l,b,h;
			std::cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			std::cout<<temp<< std::endl;
		}
		if(type==3)
		{
			int l,b,h;
			std::cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				std::cout<<"Lesser\n";
			}
			else
			{
				std::cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			std::cout<<temp.CalculateVolume()<< std::endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			std::cout<<NewBox<< std::endl;
		}

	}
}

int main()
{
	check2();
}