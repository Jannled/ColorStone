/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Device.cpp
 * Author: Jannled
 * 
 * Created on 10. Juli 2019, 07:39
 */

#include "Device.h"

Device::Device(std::string name, std::string vendor)
{
	this->name = name;
	this->vendor = vendor;
	//this->animations = animations;
}

Device::Device(const Device& orig)
{
	
}

Device::~Device()
{
	
}

/*Array<Animation> Device::getAnimations()
{
	return animations;
}*/
	
std::string Device::getName() 
{
	return getProduct() + " " + getVendor();
}

std::string Device::getProduct()
{
	return name;
}

std::string Device::getVendor()
{
	return vendor;
}
