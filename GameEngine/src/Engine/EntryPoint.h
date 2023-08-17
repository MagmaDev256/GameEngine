#pragma once

#ifdef ENGINE_PLATFORM_WINDOWS
	extern GameEngine::Application* GameEngine::CreateApplication();

	int main(int argc, char** argv)
	{
		GameEngine::Log::Init();
		ENGINE_TRACE("Hello!");
		ENGINE_CORE_WARN("Warning!");

		auto app = GameEngine::CreateApplication();
		app->Run();
		delete app;
	}
#endif