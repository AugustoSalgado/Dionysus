#pragma once

#include <cstdio>
#include "Application.h"

#ifdef DYS_PLATFORM_WINDOWS

extern Dionysus::Application* Dionysus::CreateApplication();

int main(int* argc, char** argv)
{
	Dionysus::Log::Init();
	DY_CORE_DEBUG("Dionysus Logging module initialized!");
	DY_DEBUG("Application Logging module initialized!");

	printf("Welcome to Dionysus Engine my friend!\n");
	auto app = Dionysus::CreateApplication();
	app->Run();
	delete app;
}



#endif
