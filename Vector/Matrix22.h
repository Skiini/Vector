#ifndef MATRIX22_H //Matrix22.cpp
#define MATRIX22_H
#include "Matrix22.h"
#include "Vector2.h"

class Matrix22
{
public:
	Matrix22();
	~Matrix22();
private:
	Vector2 v1;
	Vector2 v2;
};

#endif //!Matrix22.cpp