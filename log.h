#ifndef _LOG_H
#define _LOG_H

#include <iostream>

#if DEBUG
	#define LOG(x) do { std::cerr << x << std::endl; } while(0);
#else
	#define LOG(x)
#endif

#endif