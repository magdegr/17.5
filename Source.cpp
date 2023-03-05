#include <iostream>

using namespace std;

class Vector
{
public:

Vector() : x(5), y(5), z(5)
{}

Vector (double _x,double _y,double _z) : x(_x), y(_y), z(_z)
{}

double GetY()
{
	return y;
}
double Show()
{
	double V = x * x + y * y + z * z;

	return sqrt(V);
}
private:

	double x = 0;
	double y = 0;
	double z = 0;

};

int main()
{
	Vector V;
	V.Show();

	cout << V.Show();
}