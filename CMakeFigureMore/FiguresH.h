#pragma once
#include <iostream>

class  Figures
{
public:	
	int a, b, c, d;//�������
	int	A, B, C, D;//����
	int number;//���������� ������

	std::string NameFigures;
	
	virtual std::string getType();	
};

void print_info(Figures* f);	












