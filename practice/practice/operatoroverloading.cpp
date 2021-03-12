#include <iostream>

struct vec2
{
	float x, y;
};//구조체는 ;붙여라

vec2 operator+(vec2 lhs, vec2 rhs)
{
	vec2 result;
	result.x = lhs.x + rhs.x;
	result.y = lhs.y + rhs.y;
	return result;
}

vec2 operator-(vec2 lhs, vec2 rhs)
{
	vec2 result;
	result.x = lhs.x - rhs.x;
	result.y = lhs.y - rhs.y;
	return result;
}

vec2 operator*(float lhs, vec2 rhs)
{
	vec2 result;
	result.x = lhs * rhs.x;
	result.y = lhs * rhs.y;
	return result;
}

vec2 operator/(vec2 lhs, float rhs)
{
	vec2 result;
	result.x = lhs.x / rhs;
	result.y = lhs.y / rhs;
	return result;
}

bool operator==(vec2 lhs, vec2 rhs)
{
	if (lhs.x == rhs.x && lhs.y == rhs.y)
		return true;
	else
		return false;
}

int main()//한번 더 이해하자
{
	bool result;

	vec2 a{ 1.f,2.f };
	vec2 b{ 1.f,2.f };
	float x = 1;
	float y = 1;

	vec2 c = a / y;
	result = a == b;

	std::cout << c.x << " " << c.y << std::endl;
	std::cout << result;
}