
#ifndef Vector3_H //Vector3.cpp
#define Vector3_H

class Vector3

{
public:
	Vector3(float x, float y, float z);
	~Vector3();

	float x;
	float y;
	float z;

	Vector3 operator+(Vector3 v1);
	Vector3 operator-(Vector3 v1);
	Vector3 operator*(float f);

	void Show();
	float Length();
	static float Dot(Vector3 v1, Vector3 v2);
	static Vector3 Cross(Vector3 v1, Vector3 v2);
	static Vector3 Lerp(Vector3 v1, Vector3 v2, float ratio);
	static Vector3 Proj(Vector3 v1, Vector3 v2);
	static Vector3 Refl(Vector3 inDir, Vector3 normal);
	static float AnglesBetween(Vector3 v1, Vector3 v2);
private:
	
};

#endif // !Vector3_H