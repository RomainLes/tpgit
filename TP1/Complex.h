#pragma once

class Complex{
public:
	Complex();
	~Complex();
	double getReal();
	double getIm();

private:
	double _im;
	double _real;
};
