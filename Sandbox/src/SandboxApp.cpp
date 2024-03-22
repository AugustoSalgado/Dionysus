#include "Dionysus.h"

class Sandbox : public Dionysus::Application
{
public:
	Sandbox()
	{
		
	}
	~Sandbox()
	{
		
	}
};

Dionysus::Application* Dionysus::CreateApplication()
{
	return new Sandbox();
}
