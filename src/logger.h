#ifndef LOGGER_H
#define LOGGER_H
#ifdef _DEBUG
	#include <qstring.h>
	#include <qmessagebox.h>

	class Logger
	{
	public:
		Logger();
		~Logger();
		static void log(const QString& info);

	private:
		
	};
	#define LOG(info) Logger::log(info)
#else
	#define LOG(info) 
#endif
#endif // LOGGER_H


