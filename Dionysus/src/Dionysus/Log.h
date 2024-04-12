#include "Core.h"
#include "memory"
#include "spdlog/spdlog.h"

namespace Dionysus
{
	class DIONYSUS_API Log
	{
	public:
		static void Init();
		inline static std::shared_ptr<spdlog::logger>& GetEngineLogger() { return s_engineLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_clientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_engineLogger;
		static std::shared_ptr<spdlog::logger> s_clientLogger;
	};
}

//Log macros
#define DY_CORE_TRACE(...) ::Dionysus::Log::GetEngineLogger()->trace(__VA_ARGS__)
#define DY_CORE_INFO(...) ::Dionysus::Log::GetEngineLogger()->info(__VA_ARGS__)
#define DY_CORE_DEBUG(...) ::Dionysus::Log::GetEngineLogger()->debug(__VA_ARGS__)
#define DY_CORE_WARN(...) ::Dionysus::Log::GetEngineLogger()->warn(__VA_ARGS__)
#define DY_CORE_ERROR(...) ::Dionysus::Log::GetEngineLogger()->error(__VA_ARGS__)
#define DY_CORE_CRITICAL(...) ::Dionysus::Log::GetEngineLogger()->critical(__VA_ARGS__)

#define DY_TRACE(...) ::Dionysus::Log::GetClientLogger()->trace(__VA_ARGS__)
#define DY_INFO(...) ::Dionysus::Log::GetClientLogger()->info(__VA_ARGS__)
#define DY_DEBUG(...) ::Dionysus::Log::GetClientLogger()->debug(__VA_ARGS__)
#define DY_WARN(...) ::Dionysus::Log::GetClientLogger()->warn(__VA_ARGS__)
#define DY_ERROR(...) ::Dionysus::Log::GetClientLogger()->error(__VA_ARGS__)
#define DY_CRITICAL(...) ::Dionysus::Log::GetClientLogger()->critical(__VA_ARGS__)