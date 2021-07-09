#pragma once
#include "../DLL/IPlugin.h"

class Plugin1 : public IPlugin
{
public:
	Plugin1() = default;
	~Plugin1() = default;

	std::string getName() override;
};

extern "C" __declspec(dllexport) Plugin1 * function();