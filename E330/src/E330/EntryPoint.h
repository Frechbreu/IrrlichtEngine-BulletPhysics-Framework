#pragma once

#ifdef E330_PLATFORM_WINDOWS

extern E330::Application* E330::createApplication();

int main(int argc, char** argv)
{
	printf("E330 Engine");
	auto app = E330::createApplication();
	app->run();
	delete app;
}

#endif;