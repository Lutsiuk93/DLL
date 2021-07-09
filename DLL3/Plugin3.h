#pragma once
#include "../DLL/IPlugin.h"

class Plugin3 : public IPlugin
	{
	public:
		Plugin3() = default;
		~Plugin3() = default;

		std::string getName() override;
	};

extern "C" __declspec(dllexport) Plugin3 * function();