#include "ccw.h"
#include <cstring>
#include <sstream>

CCW::CCW()
{
	command = new char[strlen("CCW")+1];
	strcpy(command, "CCW");
}

CCW::CCW(int _value)
{
	std::stringstream sstream;
	sstream << " CCW " << _value;

	command = new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());
}

double CCW::get_delay()
{ 
	return 2; 
}