#define _USE_MATH_DEFINES
#include <math.h>
#include <cmath>

class Circle
{
	public:

		Circle()
		{
			radius = 0;
		};

		Circle(double temporaryRadius)
		{
			radius = temporaryRadius;
		};

		double GetSquare(double angle)
		{
			return (M_PI * pow(radius, 2) * angle) / 360;
		};

		double GetArcLength(double angle)
		{
			return (((M_PI * radius) / 180) * angle);
		};

	private:

		double radius;
};
