#pragma once
#ifndef PIE_H
#define PIE_H
#include <string>
class Pie {
public:
	virtual std::string description() = 0;
	virtual void tastiness() = 0;
};
#endif