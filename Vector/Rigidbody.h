#ifndef RIGIDBODY_H //Rigidbody.cpp
#define RIGIDBODY_H

#include "Vector2.h"

class Rigidbody
{
private:
	Vector2 position;
	Vector2 vitesse;
	void update();
	bool isSimulate;
	bool isNewForce;
	Vector2 tmpPosition;

public:
	Rigidbody(Vector2 newPosition);

	void addForce(Vector2 f);
	void setSimulate(bool newSimulate);

	~Rigidbody();
};

#endif //!Rigidbody.cpp