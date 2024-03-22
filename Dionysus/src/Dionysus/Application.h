#pragma once
#include "Core.h"

namespace Dionysus
{
	class DIONYSUS_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	// The client defines it
	Application* CreateApplication();

}

