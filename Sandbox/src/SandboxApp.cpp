#include <E330.h>

class Sandbox : public E330::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

E330::Application* E330::createApplication()
{
	return new Sandbox;
}