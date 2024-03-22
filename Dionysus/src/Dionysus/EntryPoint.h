#pragma once

#include <cstdio>

#include "Application.h"

#ifdef DYS_PLATFORM_WINDOWS

extern Dionysus::Application* Dionysus::CreateApplication();

int main(int* argc, char** argv)
{
	printf("Welcome to Dionysus Engine my friend!\n");
	auto app = Dionysus::CreateApplication();
	app->Run();
	delete app;
}



#endif
