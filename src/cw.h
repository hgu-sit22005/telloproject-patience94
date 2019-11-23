#pragma once
#include "TelloPro.h"

class CW: public TelloPro
{
public:
	CW();
	CW(int _value);

public:
	double get_delay();
};