#pragma once
#include "TelloPro.h"

class CCW: public TelloPro
{
public:
	CCW();
	CCW(int _value);

public:
	double get_delay();
};