#include <iostream>
#include <Windows.h>
#include <filesystem>
#include "IPlugin.h"

namespace fs = std::filesystem;

void loadPlugin(const char* dll_name)
    {
    auto hGetProcIDLL = LoadLibraryA(dll_name);

    if (!hGetProcIDLL)
        {
        std::cout << "could not load library!" << std::endl;
        return;
        }

    auto testfunc = reinterpret_cast<IPlugin * (*)()>(GetProcAddress(hGetProcIDLL, "function"));

    if (!testfunc)
        {
        std::cout << "function not found!" << std::endl;
        return;
        }

    auto* plugin = testfunc();
    std::cout << plugin->getName() << std::endl;

    delete plugin;

    }

int main()
    {

    constexpr auto path = ".\\plugins";

    for (const auto entry : fs::directory_iterator(path))
        {
        loadPlugin(entry.path().string().c_str());
        }

    }