#include "Pie.h"
#ifndef RASPBERRYPIE_H
#define RASPBERRYPIE_H

class RaspberryPie : public Pie {
public:
	std::string description() override;
	void tastiness() override;
};
#endif