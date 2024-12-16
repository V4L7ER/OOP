#include <iostream>

class CMPLX {
public:
	CMPLX(float real, float image);
	CMPLX(const CMPLX& what);
	~CMPLX();
	// �������� ������������ �� �����������
	CMPLX& operator=(CMPLX&& what) noexcept;
	// ���������� ��������� () ��� �������
	CMPLX operator()(float real, float image) const;
	// ��������� ����� � ������ � �����
	friend std::ostream& operator<<(std::ostream& os, const CMPLX& c);
	friend std::istream& operator>>(std::istream& is, CMPLX& c);
	CMPLX operator+(CMPLX& what) const;
	CMPLX operator+(float what) const;
	CMPLX operator-(CMPLX& what) const;
	CMPLX operator-(float what) const;
	CMPLX operator*(float what) const;
	CMPLX operator*(double what) const;
	CMPLX& operator=(const CMPLX& what);
private:
	float re;
	float im;
};