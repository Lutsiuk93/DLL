#include"Plugin1.h"

std::string Plugin1::getName()
{
	return "Plugin 1 loaded!";
}

Plugin1* function()
{
	return new Plugin1();
}