#include <iostream>
#include <cmath>

class Student
{
private:
	int scores[5];

public:
	void input()
	{
		std::cin >> scores[0] >> scores[1] >> scores[2] >> scores[3] >> scores[4];
	}

	int calculateTotalScore()
	{
		int sum;
		sum = scores[0] + scores[1] + scores[2] + scores[3] + scores[4];
		return sum;
	}
};

int main()
{
	int i;
	int n;
	std::cin >> n;

	Student *s = new Student[n];

	for (i = 0; i < n; i++)
	{
		s[i].input();
	}

	int Kristen_grades = s[0].calculateTotalScore();

	int count = 0;
	for (i = 1; i < n; i++)
	{
		if (Kristen_grades > s[i].calculateTotalScore())
			count++;
	}

	std::cout << count;
}