#include "Vector3.h"
#include <iostream>

Vector3::Vector3(float newX, float newY, float newZ)
{
	x = newX;
	y = newY;
	z = newZ;
}

Vector3 Vector3::operator+(Vector3 v1)
{
	Vector3 v(0.0f, 0.0f, 0.0f);
	v.x = v1.x + x;
	v.y = v1.y + y;
	v.z = v1.z + z;
	return v;
}

Vector3 Vector3::operator-(Vector3 v1)
{
	Vector3 v(0.0f, 0.0f, 0.0f);
	v.x = v1.x - x;
	v.y = v1.y - y;
	v.z = v1.z - z;
	return v;
}

Vector3 Vector3::operator*(float f)
{
	Vector3 v(0.0f, 0.0f, 0.0f);
	v.x = f * x;
	v.y = f * y;
	v.z = f * z;
	return v;
}

float Vector3::Dot(Vector3 v1, Vector3 v2)
{
	return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
}

Vector3 Vector3::Cross(Vector3 v1, Vector3 v2)
{
	Vector3 v(0.0f,0.0f,0.0f);
	v.x = (v1.y * v2.z - v1.z * v2.y);
	v.y = (v1.z * v2.x - v1.x * v2.z);
	v.z = (v1.x * v2.y - v1.y * v2.x);
	return v;
}

Vector3 Vector3::Lerp(Vector3 v1, Vector3 v2, float ratio)
{
	return v1 + ((v2-v1) * ratio);
}

Vector3 Vector3::Proj(Vector3 v1, Vector3 v2)
{
	return v1 * (Vector3::Dot(v2, v1) / Vector3::Dot(v1, v1));
}

Vector3 Vector3::Refl(Vector3 inDir, Vector3 normal)
{
	return inDir - normal * (2 * Vector3::Dot(inDir, normal));
}

float Vector3::Length()
{
	return sqrt(x*x + y*y + z*z);
}

float Vector3::AnglesBetween(Vector3 v1, Vector3 v2)
{
	return acos(Vector3::Dot(v1, v2) / (v1.Length()*v2.Length()));
}

void Vector3::Show()
{
	std::cout << "x: " << x << "  y: " << y << "  z: " << z << "\n";
}

Vector3::~Vector3()
{
}
