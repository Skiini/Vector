#include "Matrix22.h"
#include "Vector2.h"
#include <iostream>
#include <cmath>

Matrix22::Matrix22(Vector2 newv1, Vector2 newv2)
{
	v1 = newv1;
	v2 = newv2;
}

Matrix22 Matrix22::operator+(Matrix22 m1)
{
	return Matrix22(v1 + m1.v1, v2 + m1.v2);
}

Matrix22 Matrix22::operator-(Matrix22 m1)
{
	return Matrix22(v1 - m1.v1, v2 - m1.v2);
}

Matrix22 Matrix22::operator*(Matrix22 m1)
{
	return Matrix22(Vector2(v1.x*m1.v1.x, v2.x*m1.v1.y),
		Vector2(v1.y*m1.v2.x, v2.y*m1.v2.y));
}

Matrix22 Matrix22::operator*(float f)
{
	return Matrix22(v1*f, v2*f);
}

Vector2 Matrix22::operator*(Vector2 newv1)
{
	return Vector2(v1.x*newv1.x + v2.x*newv1.y, v1.y*newv1.x + v2.y*newv1.y);
}

Matrix22 Matrix22::RotationMatrix(float angle)
{
	return Matrix22(Vector2(cos(angle), -sin(angle)), Vector2(sin(angle), cos(angle)));
}

Matrix22 Matrix22::Inverse()
{
	float tempSumValue;
	tempSumValue = v1.x * v2.y - v2.x * v1.y;

	if (tempSumValue == 0)
	{
		std::cout << "This Matrix havn't inverse";

		//Need to stop the function!!!
	}

	return *this*(tempSumValue / 1);
}

void Matrix22::Show()
{
	std::cout << v1.x << "   " << v2.x << "\n";
	std::cout << v1.y << "   " << v2.y << "\n";
}

Matrix22::~Matrix22()
{
}
