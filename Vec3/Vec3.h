#include <math.h>

template<class TYPE>
class vec3
{
public:
	TYPE x;
	TYPE y;
	TYPE z;
public:
	vec3() { x = NULL; y = NULL; z = NULL; };
	vec3(const TYPE x, const TYPE y, const TYPE z) : x(x), y(y), z(z) {};
	vec3(const vec3 *vector)
	{
		x = vector->x;
		y = vector->y;
		z = vector->z;
	};
	~vec3() {};

	vec3 operator+(const vec3& v3)
	{
		vec3 dummyVec;

		dummyVec.x = x + v3.x;
		dummyVec.y = y + v3.y;
		dummyVec.z = z + v3.z;

		return dummyVec;
	}

	vec3 operator-(const vec3& v3)
	{
		vec3 dummyVec;

		dummyVec.x = x - v3.x;
		dummyVec.y = y - v3.y;
		dummyVec.z = z - v3.z;

		return dummyVec;
	}

	void operator+=(const vec3& v3)
	{
		x = x + v3.x;
		y = y + v3.y;
		z = z + v3.z;
	}

	void operator-=(const vec3& v3)
	{
		x = x - v3.x;
		y = y - v3.y;
		z = z - v3.z;
	}

	void operator=(const vec3& v3)
	{
		x = v3.x;
		y = v3.y;
		z = v3.z;
	}

	bool operator==(const vec3& v3)
	{
		return x == v3.x && y == v3.y && z == v3.z;
	}

	bool is_zero()
	{
		return x == 0 && y == 0 && z == 0;
	}

	void zero()
	{
		x = 0;
		y = 0;
		z = 0;
	}

	float distance_to(const vec3& v3)
	{
		vec3<int> distance;

		distance.x = v3.x - x;
		distance.y = v3.y - y;
		distance.z = v3.z - z;

		return sqrtf(distance.x * distance.x + distance.y * distance.y + distance.z * distance.z);
	}

	vec3<float> normalize()
	{
		vec3<float> dummyVec;
		float module = distance_to({ 0,0,0 });

		dummyVec.x = x / module;
		dummyVec.y = y / module;
		dummyVec.z = z / module;

		return dummyVec;
	}
	};

