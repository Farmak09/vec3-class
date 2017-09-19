#include <stdio.h>
#include "Vec3.h"

void main()
{
	vec3<int> vector1;
	vec3<int> vector2 = { 1,2,3 };
	vec3<int> vector3 = vector2;
	vec3<int> vector4;
	vec3<int> vector5;
	vec3<int> vector6 = { 1,1,1 };
	vec3<int> vector7 = vector6;
	vec3<int> vector8;
	vec3<int> vector9 = vector2;
	bool checker = false;
	vec3<int> vector10;
	bool checker2 = false;
	vec3<int> vector11 = { 1,1,1 };
	vec3<int> vector12 = vector2;
	float distance = 0;
	vec3<int> vector13 = { 3,1,2 };
	vec3<float> normalVec;

	vector4 = vector2 + vector3;

	vector5 = vector4 - vector2;

	vector6 += vector2;

	vector7 -= vector3;

	vector8 = vector2;

	if(vector9 == vector2)
		checker = true;

	checker2 = vector10.is_zero();

	vector11.zero();

	distance = vector12.distance_to(vector1);

	normalVec = vector13.normalize();
}