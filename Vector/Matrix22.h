#ifndef MATRIX22_H //Matrix22.cpp
#define MATRIX22_H
#include "Matrix22.h"
#include "Vector2.h"

class Matrix22
{
public:
	Matrix22(Vector2 v1, Vector2 v2);
	~Matrix22();

	static Matrix22 RotationMatrix(float angle);
	Matrix22 Inverse();
	void Show();
private:
	Vector2 v1;
	Vector2 v2;

	Matrix22 operator+(Matrix22 m1);
	Matrix22 operator-(Matrix22 m1);
	Matrix22 operator*(Matrix22 m1);
	Matrix22 operator*(float f);
	Vector2 operator*(Vector2 v1);

	
};

#endif //!Matrix22.cpp