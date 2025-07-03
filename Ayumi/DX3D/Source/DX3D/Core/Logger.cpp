#include <DX3D/Core/Logger.h>
#include <iostream>

dx3d::Logger::Logger(LogLevel logLevel) : m_logLevel(logLevel)
{
	std::clog << "Project Ayumi" << std::endl;
	std::clog << "Developer: Steven Olmido" << std::endl;
	std::clog << "<---------------------->" << std::endl;
}

void dx3d::Logger::log(LogLevel level, const char* message) const
{
	auto LogLevelString = [](LogLevel level)
	{
		switch (level)
		{ 
		case LogLevel::Info:return "Info";
		case LogLevel::Warning:return "Warning";
		case LogLevel::Error:return "Error";
		default: return "Unknown";
		}
	};

	if (level > m_logLevel) return;
	std::clog << "[DX3D " << LogLevelString(level) << ": " << message << std::endl;
}
