// Filipe martins

#include "Vector3.h"
#include <iostream>
//Ou n'importe quel header

int main()
{
	Vector3 a(1.0f, 2.0f, 3.0f);
	Vector3 b(4.0f, 5.0f, 6.0f);

	(a + b).Show();
	(a - b).Show();

	std::cout << "Dot product: " << Vector3::Dot(a, b) << "\n";

	Vector3::Cross(a, b).Show();
	
	Vector3::Lerp(a, b, 0.5f).Show();

	Vector3::Proj(a, b).Show();
	Vector3::Proj(b, a).Show();

	Vector3::Refl(a, b).Show();
	Vector3::Refl(b, a).Show();

	std::cout << "Angle between the vectors: " << Vector3::AnglesBetween(a,b) << "\n";

	//Windows Specifics
	system("Pause");
	return 0;
}

