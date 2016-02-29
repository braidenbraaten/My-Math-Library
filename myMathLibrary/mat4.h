#pragma once
namespace bab
{
	struct mat4
	{
		const static int rows = 4;
		const static int columns = 4;
		float Matrix[rows][columns] =
		{
			1, 0, 0, 0,
			0, 1, 0, 0,
			0, 0, 1, 0,
			0, 0, 0, 1
		};

		float* ptr = &Matrix[0][0];
		void Identity();
		mat4 operator=(const mat4&);
		float Determinant();
		mat4 coFactors();
		mat4 Inverse();
		mat4 Transpose();
		mat4 diagonalFlip();
		void Randomize();

		mat4 Scale(float, float);
		mat4 Rotate(float);
		mat4 Translate(float, float);
	};

	mat4   operator+(const mat4&, const mat4&);
	mat4   operator+=(mat4&, const mat4&);
	mat4   operator-(const mat4&, const mat4&);
	mat4   operator-=(mat4&, const mat4&);
	mat4   operator*(const mat4&, const mat4&);

	mat4   operator*=(mat4&, const mat4&);

}