#include <iostream>

struct vec2
{
	double x, y;
};

class Rect
{
private:
	vec2 position;
	int w, h;

public:
	vec2 Getposition()
	{
		return position;
	}

	int GetWidth()
	{
		return w;
	}

	int GetHeight()
	{
		return h;
	}

	void SetPosition(vec2 pos)
	{
		position = pos;
	}

	void SetWidth(int width)
	{
		w = width;
	}

	void SetHeight(int height)
	{
		h = height;
	}

	Rect()
	{
		position.x = 0;
		position.y = 0;
		w = 10;
		h = 10;
	}

	Rect(int width, int height)
	{
		position.x = 0;
		position.y = 0;
		w = width;
		h = height;
	}

	Rect(int width, int height, double x, double y)
	{
		position.x = x;
		position.y = y;
		w = width;
		h = height;
	}

	int GetSize()
	{
		int size = w * h;
		return size;
	}

	bool IsInside(vec2 pos)
	{
		vec2 givenpos;
		bool rectangle = true;
		givenpos = pos;//주어진 좌표
		if (((givenpos.x <= position.x) && (position.x <= givenpos.x + w)) && ((givenpos.y <= position.y) && (position.y <= givenpos.y + h)))
			return rectangle;
		else
			return !rectangle;
	}
};

int main()
{
	Rect r(20, 10);
	
	std::cout << r.Getposition().x << std::endl;
	std::cout << r.GetHeight() << std::endl;
	std::cout << r.GetSize()<<std::endl;

	Rect r2(10, 5, 20, 10);
	std::cout << r.GetWidth() << std::endl;
	std::cout << r.IsInside({5, 5})<<std::endl;

	std::cout << r.IsInside({ 5, 45 }) << std::endl;
}