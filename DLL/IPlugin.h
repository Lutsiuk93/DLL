#pragma once
#include <string>

class IPlugin
{
public:
	IPlugin() = default;
	virtual ~IPlugin() = default;
	
	virtual std::string getName() = 0;

};