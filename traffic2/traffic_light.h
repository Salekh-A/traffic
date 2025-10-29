#pragma once

#include "tbitfield.h"
#include <string>
#include <iostream>

class traffic_light {
public:
	TBitField state;
	traffic_light();
	virtual void change_green();
	virtual void change_red();
	virtual void change_yellow();
	virtual void condition() = 0;

	int red_bit = 0;
	int green_bit = 1;
	int yellow_bit = 2;
};

class car_traffic_light : public traffic_light {
public:
	void condition();
};

class ped_traffic_light : public traffic_light {
public:
	void condition();
};

class crossroad {
	car_traffic_light car_light;
	ped_traffic_light ped_light;
public:
	void nach();
	void current_light();
	void switchs();
};