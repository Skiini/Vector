#include "Rigidbody.h"

Rigidbody::Rigidbody(Vector2 newPosition)
{
	isSimulate = true;
	position = newPosition;
}

void Rigidbody::addForce(Vector2 f)
{
	isNewForce = true;
	tmpPosition = position + f;
}

void Rigidbody::setSimulate(bool newSimulate)
{
	isSimulate = newSimulate;
}

void Rigidbody::update()
{
	if (isSimulate)
	{
		for (double t = 0.0; t >= 0.0; t += 1.0 / 60.0)
		{
			if (isNewForce)
			{
				position = tmpPosition;
				isNewForce = false;
			}
		}
	}
	
}

Rigidbody::~Rigidbody()
{
}
