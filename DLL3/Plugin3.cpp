#include"Plugin3.h"

std::string Plugin3::getName()
	{
	return "Plugin 3 loaded!";
	}

Plugin3* function()
	{
	return new Plugin3();
	}