#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include "Natural_Fraction.h"
using namespace std;

void natural_fraction::chznz() {
	cout << "Fraction: " << ch << "/" << zn << endl;
	cout << "Numerator: " << ch << ". Denominator: " << zn << ". The whole part: " << ch / zn << endl;
}

natural_fraction natural_fraction::operator - (const int number) {
	natural_fraction result;
	result.zn = zn;
	result.ch = ch - zn * number;
	result.sokr();
	return result;
}

natural_fraction natural_fraction::operator * (const natural_fraction &f) {
	natural_fraction result;
	result.ch = ch * f.ch;
	result.zn = zn * f.zn;
	result.sokr();
	return result;
}

natural_fraction natural_fraction::operator * (const int number) {
	natural_fraction result;
	result.ch = ch * number;
	result.zn = zn;
	result.sokr();
	return result;
}

natural_fraction natural_fraction::operator / (const natural_fraction &f) {
	natural_fraction result;
	result.ch = ch * f.zn;
	result.zn = zn * f.ch;
	result.sokr();
	return result;
}

natural_fraction& natural_fraction::operator -= (const int number) {
	zn = zn;
	ch = ch - zn * number;
	sokr();
	return *this;
}

natural_fraction& natural_fraction::operator *= (const natural_fraction &f) {
	ch = ch * f.ch;
	zn = zn * f.zn;
	sokr();
	return *this;
}

natural_fraction& natural_fraction::operator *= (const int number) {
	ch = ch * number;
	zn = zn;
	sokr();
	return *this;
}

natural_fraction& natural_fraction::operator /= (const natural_fraction &f) {
	ch = ch * f.zn;
	zn = zn * f.ch;
	sokr();
	return *this;
}

void natural_fraction::show() {
	cout << ch << "/" << zn << endl;
}

void natural_fraction::sokr() {
	for (int i = 2; i < ((ch < zn) ? ch : zn); i++) {
		while (ch % i == 0 && zn % i == 0) {
			ch = ch / i;
			zn = zn / i;
		}
	}
}

natural_fraction natural_fraction::operator+(natural_fraction a) {
	natural_fraction b;
	b.ch = ch * a.zn + a.ch*a.zn;
	b.zn = a.zn*zn;
	b.sokr();
	return b;
}

natural_fraction natural_fraction::operator-(natural_fraction a) {
	natural_fraction b;
	b.ch = ch * a.zn - a.ch*a.zn;
	b.zn = a.zn*zn;
	b.sokr();
	return b;
}

natural_fraction& natural_fraction::operator+=(natural_fraction a) {
	ch = ch * a.zn + a.ch*zn;
	zn = a.zn*zn;
	sokr();
	return *this;
}

natural_fraction& natural_fraction::operator-=(natural_fraction a) {
	ch = ch * a.zn - a.ch*zn;
	zn = a.zn*zn;
	sokr();
	return *this;
}

natural_fraction& natural_fraction::operator /= (const int number) {
	ch = ch;
	zn = zn * number;
	sokr();
	return *this;
}

natural_fraction natural_fraction::operator / (const int number) {
	natural_fraction result;
	result.ch = ch;
	result.zn = zn * number;
	result.sokr();
	return result;
}

double natural_fraction::to_double() {
	ch2 = ch;
	zn2 = zn;
	answer = ch2 / zn2;
	cout << "your double is: " << answer << endl;
	return answer;
}

bool natural_fraction::operator < (const natural_fraction &f) const {
	natural_fraction first;
	natural_fraction second;
	first.ch = ch * f.zn;
	second.ch = f.ch * zn;
	if (first.ch < second.ch)
		return true;
	return false;
}

bool natural_fraction::operator <= (const natural_fraction &f) const {
	natural_fraction first;
	natural_fraction second;
	first.ch = ch * f.zn;
	second.ch = f.ch * zn;
	if (first.ch <= second.ch)
		return true;
	return false;
}

bool natural_fraction::operator > (const natural_fraction &f) const {
	natural_fraction first;
	natural_fraction second;
	first.ch = ch * f.zn;
	second.ch = f.ch * zn;
	if (first.ch > second.ch)
		return true;
	return false;
}

bool natural_fraction::operator >= (const natural_fraction &f) const {
	natural_fraction first;
	natural_fraction second;
	first.ch = ch * f.zn;
	second.ch = f.ch * zn;
	if (first.ch >= second.ch)
		return true;
	return false;
}

bool natural_fraction::max(natural_fraction a) {
	return ch > a.ch ? true : false;
}