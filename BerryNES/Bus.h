#pragma once
#include "CPU6502.h"
#include <cstdint>
#include <array>

class Bus
{
public:
	Bus();
	~Bus();

public:
	CPU6502 cpu;

	// TODO Fake RAM
	std::array<uint8_t, 64 * 1024> ram;

public:
	void write(uint16_t addr, uint8_t data);
	uint8_t read(uint16_t addr, bool bReadOnly = false);
};
