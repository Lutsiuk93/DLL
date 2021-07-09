#include"Plugin2.h"

std::string Plugin2::getName()
	{
	return "Plugin 2 loaded!";
	}

Plugin2* function()
	{
	return new Plugin2();
	}