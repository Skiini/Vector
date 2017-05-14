#include "AABB.h"
#include "Rigidbody.h"


AABB::AABB()
{
	struct AABB
	{
		AABB() : c(), r() {}

		AABB(const Point  & center, const Point & halfwidths)
			: c(center)
			, r(halfwidths)
		{}

		Point c;        // center point
		Point r;        // halfwidths
	};

	struct Point
	{
		Point() {}
		Point(double x, double y, double z)
			: x(x)
			, y(y)
			, z(z)
		{}
		double x = 0.0;
		double y = 0.0;
		double z = 0.0;
		double w = 0.0;

		const double operator[](const int idx) const
		{
			if (idx == 0) return x;
			if (idx == 1) return y;
			if (idx == 2) return z;
			if (idx == 3) return w;

			assert(0);
		}
	};

	double Abs(double a)
	{
		return std::fabs(a);
	}

	bool testAABBAABB(const AABB &a, const AABB &b)
	{
		if (Abs(a.c[0] - b.c[0]) > (a.r[0] + b.r[0])) return false;
		if (Abs(a.c[1] - b.c[1]) > (a.r[1] + b.r[1])) return false;
		if (Abs(a.c[2] - b.c[2]) > (a.r[2] + b.r[2])) return false;

		// We have an overlap
		return true;
	};
}


AABB::~AABB()
{
}
