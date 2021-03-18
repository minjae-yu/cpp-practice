#include <iostream>

class Car
{
private:
	int wheel_num;
	double speed;
	double max_speed;


public:
	double GetMaxSpeed()
	{
		return max_speed;
	}

	int GetWheelNum()
	{
		return wheel_num;
	}

	void SpeedUp(double speed_to_increase)
	{
		speed =+ speed_to_increase;
		if (speed > max_speed)
			speed = speed - (speed - max_speed);
		else
			return;
	}

	Car(int wn, double ms)
	{
		double speed = 0;
		wheel_num = wn;
		max_speed = ms;
	}

	void PrintCurrentStatus();
};

void Car::PrintCurrentStatus()
{
	std::cout << "The Car's wheel number : " << wheel_num << std::endl;
	std::cout << "The Car's current speed : " << speed << "km/h" << std::endl;
	std::cout << "The Car's max speed : " << max_speed << "km/h" << std::endl;
}

int main()
{
	Car cars(4, 50);//wheel num,max_speed
	cars.SpeedUp(70);//speed
	cars.PrintCurrentStatus();
}