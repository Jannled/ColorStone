/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Device.h
 * Author: jannl
 *
 * Created on 10. Juli 2019, 07:39
 */

#ifndef DEVICE_H
#define DEVICE_H

#include "../lib/JLib/Array.h"
#include <stdio.h>
#include <string>
#include "Animations.h"

class Device {
public:
	Device(std::string name, std::string vendor);
	Device(const Device& orig);
	virtual ~Device();
	
	//Array<Animation> getAnimations();
	std::string getProduct();
	std::string getVendor();
	std::string getName();
	
private:
	std::string vendor;
	std::string name;
	//Array<Animation> animations;
};

#endif /* DEVICE_H */

