#pragma once
class Random
{
private:
	int highestNumber;
	int amountNumbers;
	bool unique;

public:

	Random(int h, int a, bool u);

	virtual int setHighestNumber(int h) const = 0;
	virtual int setAmountNumbers(int a) const = 0;
	virtual bool setUnique(bool u) const = 0;

};

