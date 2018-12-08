#pragma once

#include "Core.h"

namespace E330 {
	
	class E330_API Application
	{
	public:
		Application();
		virtual ~Application();

		void run();
	};
	
	// To be defined in CLIENT
	Application* createApplication();

}