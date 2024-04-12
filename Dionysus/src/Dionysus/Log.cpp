#include "Log.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Dionysus
{
	std::shared_ptr<spdlog::logger> Log::s_engineLogger;
	std::shared_ptr<spdlog::logger> Log::s_clientLogger;

	void Log::Init()
	{
		spdlog::set_pattern("[%T] %n: %v%$");
		s_engineLogger = spdlog::stdout_color_mt("DIONYSUS");
		s_engineLogger->set_level(spdlog::level::level_enum::trace);

		s_clientLogger = spdlog::stdout_color_mt("APP");
		s_clientLogger->set_level(spdlog::level::level_enum::trace);
	}

}