#pragma once

class natural_fraction {
	int ch, zn;
	double ch2, zn2, answer;
public:
	natural_fraction() :ch(0), zn(1) {};//����������� �� ���������
	natural_fraction(int n) : ch(n), zn(1) {};//����������� ��� ������ �����
	natural_fraction(int a, int b) : ch(a), zn(b) {};//����������� ��� �����
	void chznz();//���������� ����� �����, ���� � ����
	void show();//�������� �����
	void sokr();//��������� ����� (��� ��������� ����� �����)
	bool max(natural_fraction a);
	natural_fraction operator - (const int number);
	natural_fraction& operator -= (const int number);
	natural_fraction operator * (const natural_fraction &f2);
	natural_fraction operator * (const int number);
	natural_fraction operator / (const natural_fraction &f);
	natural_fraction& operator *= (const natural_fraction &f);
	natural_fraction& operator *= (const int number);
	natural_fraction& operator /= (const natural_fraction &f);
	natural_fraction operator+(natural_fraction a);
	natural_fraction operator-(natural_fraction a);
	natural_fraction& operator-=(natural_fraction a);
	natural_fraction& operator+=(natural_fraction a);
	bool operator < (const natural_fraction &f) const;
	bool operator > (const natural_fraction &f) const;
	bool operator >= (const natural_fraction &f) const;
	bool operator <= (const natural_fraction &f) const;
	double to_double();
	natural_fraction& operator /= (const int number);
	natural_fraction operator / (const int number);
	friend const natural_fraction operator++(natural_fraction& i) { // ����������
		i.ch = i.ch + i.zn;
		i.sokr();
		return i;
	}
	friend const natural_fraction& operator++(natural_fraction& i, int) {
		i.ch = i.ch + i.zn;
		i.sokr();
		return i;
	}
	friend const natural_fraction& operator--(natural_fraction& i, int) {
		i.ch = i.ch - i.zn;
		i.sokr();
		return i;
	}
};