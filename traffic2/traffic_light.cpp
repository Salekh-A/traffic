#include "traffic_light.h"
#include <string>
#include <iostream>

traffic_light::traffic_light() : state(3) { 
}


void traffic_light::change_green() {
	state.ClrBit(red_bit);
	state.ClrBit(yellow_bit);
	state.SetBit(green_bit);
}

void traffic_light::change_red() {
	state.SetBit(red_bit);
	state.ClrBit(yellow_bit);
	state.ClrBit(green_bit);
}

void traffic_light::change_yellow() {
	state.ClrBit(red_bit);
	state.SetBit(yellow_bit);
	state.ClrBit(green_bit);
}
	

void car_traffic_light::condition() {
	if (state.GetBit(green_bit)) {
		std::cout << "green for cars\n";
	}
	else if (state.GetBit(yellow_bit)) {
		std::cout << "yellow for cars\n";
	}
	else if (state.GetBit(red_bit)) {
		std::cout << "red for cars\n";
	}
}

void ped_traffic_light::condition() {
	if (state.GetBit(green_bit)) {
		std::cout << "green for pedestrian\n";
	}
	else if (state.GetBit(red_bit)) {
		std::cout << "red for pedestrian\n";
	}
}



void crossroad::nach() {
	car_light.change_green();
	ped_light.change_red();
} 	//начальное состояние

void crossroad::current_light() {
	car_light.condition();
	ped_light.condition();
}  //текущее состояние перекрестка

void crossroad::switchs() {
	if (car_light.state.GetBit(car_light.red_bit)) {
		car_light.change_green();
	}
	else if (car_light.state.GetBit(car_light.yellow_bit)) {
		car_light.change_red();
	}
	else if (car_light.state.GetBit(car_light.green_bit)) {
		car_light.change_yellow();
	}

	if (car_light.state.GetBit(car_light.red_bit)) {
		ped_light.change_green();
	}
	else {
		ped_light.change_red();
	}
}  //переключаем свет каждое обновление, и ставим условие когда пешеходка зеленая или красная
