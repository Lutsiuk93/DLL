#pragma once
#include "../DLL/IPlugin.h"

class Plugin2 : public IPlugin
{
public:
	Plugin2() = default;
	~Plugin2() = default;

	std::string getName() override;
};

extern "C" __declspec(dllexport) Plugin2 * function();