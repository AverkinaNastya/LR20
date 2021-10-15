#ifdef TRIANGLES_EXPORTS
#define TRIANGLES_API __declspec(dllexport)
#else
#define TRIANGLES_API __declspec(dllimport)
#endif

namespace TrianglesFuncs
{
	// This class is exported from the MathFuncsDll.dll
	class MyTrianglesFuncs
	{
	public:
		// Вычисление периметра треугольника A - сторона, b и c - прилежащие углы
		// ошибка, если b + c > 180 или b + c <= 0
		static TRIANGLES_API double Perimeter(double A, double b, double c);
		// Вычисление площади треугольника A - сторона, b и c - прилежащие углы
		// ошибка, если b + c > 180 или b + c <= 0
		static TRIANGLES_API double Area(double A, double b, double c);
	};
}
