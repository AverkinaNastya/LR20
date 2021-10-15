#define _USE_MATH_DEFINES
#include "Triangles.h"
#include <stdexcept>
#include <math.h>
using namespace std;
namespace TrianglesFuncs
{
	double MyTrianglesFuncs::Perimeter(double A, double b, double c)
	{
		double B, C;
		if ((b + c > 0) && (b + c <= 180)) {
			B = A * sin(b * M_PI / 180) / sin((180 - b - c) * M_PI / 180);
			C = A * sin(c * M_PI / 180) / sin((180 - b - c) * M_PI / 180);
			return A + B + C;
		}
		else {
			throw invalid_argument("Сумма прилежащих углов не должна быть <= 0 или > 180!");
		}
	}
	double MyTrianglesFuncs::Area(double A, double b, double c)
	{
		if ((b + c > 0) && (b + c <= 180)) {
			return pow(A, 2) / 2 * (sin(b * M_PI / 180) * sin(c * M_PI / 180)) / sin((180 - b - c) * M_PI / 180);
		}
		else {
			throw invalid_argument("Сумма прилежащих углов не должна быть <= 0 или > 180!");
		}
	}
}