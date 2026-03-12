#include "Pie.h"
#ifndef APRICOTPIE_H
#define APRICOTPIE_H

class ApricotPie : public Pie {
public:
	std::string description() override;
	void tastiness() override;
};
#endif