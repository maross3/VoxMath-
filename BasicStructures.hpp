#pragma once
#include <math.h>
#include <string>
#include <sstream>
#include <iomanip>
namespace VoxData {
	struct Vect3 {
		float x, y, z;

		Vect3() = default;

		Vect3(float a, float b, float c)
		{
			x = a;
			y = b;
			z = c;
		}
		float& operator [](int i)
		{
			return ((&x)[i]);
		}
		const float& operator[](int i) const
		{
			return ((&x)[i]);
		}
		Vect3& operator +=(float s)
		{
			x *= s;
			y *= s;
			z *= s;
		}
		Vect3& operator /=(float s)
		{
			x /= s;
			y /= s;
			z /= s;
		}
		std::string ToString()
		{
			return std::string("v(") + std::to_string(x) + ", " + std::to_string(y) + ", " + std::to_string(z) + ")";
		}
		std::string ToString(int i)
		{
			std::stringstream stream;
			stream << "v(" << std::fixed << std::setprecision(i) << x << ", " << std::setprecision(i) << y << ", " << std::setprecision(i) << z << ")";
			return stream.str();
		}
	};
	inline Vect3 operator *(const Vect3& v, float s)
	{
		return (Vect3(v.x * s, v.y * s, v.z * s));
	}
	inline Vect3 operator /(const Vect3& v, float s)
	{
		return (Vect3(v.x / s, v.y / s, v.z / s));
	}
	inline Vect3 operator -(const Vect3& v, float s)
	{
		return (Vect3(v.x - s, v.y - s, v.z - s));
	}
	inline Vect3 operator +(const Vect3& v, float s)
	{
		return (Vect3(v.x + s, v.y + s, v.z + s));
	}
	inline float Magnitude(const Vect3& v)
	{
		// SQRT( x^2 + y^2 + z^)
		return (sqrt(v.x * v.x + v.y * v.y + v.z * v.z));
	}
	inline Vect3 Normalize(const Vect3& v)
	{
		return (v / Magnitude(v));
	}
}
