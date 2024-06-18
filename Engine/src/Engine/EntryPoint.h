#pragma once
#ifdef ENG_PLATFORM_WINDOWS
#include "Application.h"
namespace Engine {
	Application* CreateApplication(); // To be implemented by client.
}
int main() {
	Engine::Application* app = Engine::CreateApplication();
	app->Run();
	delete app;
}
#endif