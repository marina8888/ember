#include "debugUtils.h"

bool debugParameters::debugAdapt = false;
bool debugParameters::debugRegrid = false;
bool debugParameters::debugSundials = false;
bool debugParameters::debugJacobian = false;
bool debugParameters::debugCalcIC = false;

void debugWrite(debugType::debugType type, std::string message)
{
	if ((type == debugType::adaptation && debugParameters::debugAdapt) ||
		(type == debugType::regridding && debugParameters::debugRegrid) ||
		(type == debugType::sundials && debugParameters::debugSundials))
	{
		std::cout << message << std::endl;
	}
}