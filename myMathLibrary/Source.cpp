#include <iostream>
#include "mat3.h"
#include "mat4.h"
using namespace std;
using namespace bab;

int main()
{
	mat4 m;
	//m.Identity();
	//m.Matrix[3][3] = 5;

	m.Randomize();

	//m.Matrix[3][3] = 1;
	//m.Matrix[3][0] = 0;
	//m.Matrix[3][1] = 0;
	//m.Matrix[3][2] = 0;

	for (int i = 0, c = 1; i < m.rows; ++i)
	{
		for (int j = 0; j < m.columns; ++j, ++c)
		{
			m.Matrix[i][j] = c;
		}
	}


	//for (int i = 0; i < m.rows; i++)
	//{
	//	for (int j = 0; j < m.columns; j++)
	//	{
	//		cout << m.Matrix[i][j] << endl;
	//	}
	//}

	cout << m.Determinant();

	system("pause");
}
