#include "Vector2.h"
#include <iostream>

Vector2::Vector2(float newX, float newY)
{
	x = newX;
	y = newY;
}

Vector2 Vector2::operator+(Vector2 v1)
{
	Vector2 v(0.0f, 0.0f);
	v.x = v1.x + x;
	v.y = v1.y + y;
	return v;
}

Vector2 Vector2::operator-(Vector2 v1)
{
	Vector2 v(0.0f, 0.0f);
	v.x = v1.x - x;
	v.y = v1.y - y;
	return v;
}

Vector2 Vector2::operator*(float f)
{
	Vector2 v(0.0f, 0.0f);
	v.x = f * x;
	v.y = f * y;
	return v;
}

float Vector2::Dot(Vector2 v1, Vector2 v2)
{
	return v1.x * v2.x + v1.y * v2.y;
}

Vector3 Vector2::Cross(Vector2 v1, Vector2 v2)
{
	Vector3 v(0.0f, 0.0f, 0.0f);
	v.z = (v1.x * v2.y - v1.y * v2.x);
	return v;
}

Vector2 Vector2::Lerp(Vector2 v1, Vector2 v2, float ratio)
{
	return v1 + ((v2 - v1) * ratio);
}

Vector2 Vector2::Proj(Vector2 v1, Vector2 v2)
{
	return v1 * (Vector2::Dot(v2, v1) / Vector2::Dot(v1, v1));
}

Vector2 Vector2::Refl(Vector2 inDir, Vector2 normal)
{
	return inDir - normal * (2 * Vector2::Dot(inDir, normal));
}

float Vector2::Length()
{
	return sqrt(x*x + y*y);
}

float Vector2::AnglesBetween(Vector2 v1, Vector2 v2)
{
	return acos(Vector2::Dot(v1, v2) / (v1.Length()*v2.Length()));
}

void Vector2::Show()
{
	std::cout << "x: " << x << "  y: " << y << "\n";
}

Vector2::~Vector2()
{
}
