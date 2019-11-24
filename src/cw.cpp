#include "cw.h"
#include <cstring>
#include <sstream>

CW::CW()
{
	command = new char[strlen("cw")+1];
	strcpy(command, "cw");
}

CW::CW(int _value)
{
	std::stringstream sstream;
	sstream << " cw " << _value;

	command = new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());
}

double CW::get_delay()
{ 
	return 2; 
}