


#ifndef _TRINAMIC_H_
#define _TRINAMIC_H_

#include "RepRapFirmware.h"

namespace SmartDrivers
{
	void Init() noexcept;
	void Exit() noexcept;
	void Spin(bool powered) noexcept;
	void TurnDriversOff() noexcept;
//    void Diagnostics(MessageType mtype) noexcept;
	void SetAxisNumber(size_t driver, uint32_t axisNumber) noexcept;
	uint32_t GetAxisNumber(size_t drive) noexcept;
	void SetCurrent(size_t driver, float current) noexcept;
	void EnableDrive(size_t driver, bool en) noexcept;
	uint32_t GetLiveStatus(size_t driver) noexcept;
	uint32_t GetAccumulatedStatus(size_t drive, uint32_t bitsToKeep) noexcept;
	bool SetMicrostepping(size_t drive, unsigned int microsteps, bool interpolation) noexcept;
	unsigned int GetMicrostepping(size_t drive, bool& interpolation) noexcept;
	bool SetDriverMode(size_t driver, unsigned int mode) noexcept;
	DriverMode GetDriverMode(size_t driver) noexcept;
	void SetStallThreshold(size_t driver, int sgThreshold) noexcept;
	void SetStallFilter(size_t driver, bool sgFilter) noexcept;
	void SetStallMinimumStepsPerSecond(size_t driver, unsigned int stepsPerSecond) noexcept;
	void AppendStallConfig(size_t driver, const StringRef& reply) noexcept;
	void AppendDriverStatus(size_t driver, const StringRef& reply) noexcept;
	float GetStandstillCurrentPercent(size_t driver) noexcept;
	void SetStandstillCurrentPercent(size_t driver, float percent) noexcept;
	bool SetRegister(size_t driver, SmartDriverRegister reg, uint32_t regVal) noexcept;
	uint32_t GetRegister(size_t driver, SmartDriverRegister reg) noexcept;
};


enum class TmcType : uint8_t
{
	none = 0,
	TMC2208 = 1,
	TMC2209 = 2,
	TMC2130 = 3,
	TMC2160 = 4,
	TMC2660 = 5,
	TMC5130 = 6,
	TMC5160 = 7
};




#endif