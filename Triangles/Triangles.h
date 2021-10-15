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
		// ���������� ��������� ������������ A - �������, b � c - ���������� ����
		// ������, ���� b + c > 180 ��� b + c <= 0
		static TRIANGLES_API double Perimeter(double A, double b, double c);
		// ���������� ������� ������������ A - �������, b � c - ���������� ����
		// ������, ���� b + c > 180 ��� b + c <= 0
		static TRIANGLES_API double Area(double A, double b, double c);
	};
}
