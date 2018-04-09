#pragma once
class Vec2
{
public:
	Vec2() =  default;
	Vec2(float x_in, float y_in);
	Vec2 operator+ (const Vec2& rhs) const; //lhs + rhs

	float x;
	float y;
	
};

