
#pragma once

	using namespace std;
	ref class ZavdClass
	{
		double a, b;
	public:
		ZavdClass() { a = 1; b = 1; }//���������������� �����������
		void Fn_b(double x, double y, double z);//���������� ������� b[x,y,z]
		void Fn_a(double x, double y, double z);// ���������� ������� a[x, y, z,b]
		double geta() { return a; }
		double getb() { return b; }

		// ���� ������� ��� ��������� a � b
		double CompareAndPrint(double a,double b);
	};


