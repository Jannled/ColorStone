/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   HardwareInterface.h
 * Author: Jannled
 *
 * Created on 10. Juli 2019, 07:31
 */

#ifndef HARDWAREINTERFACE_H
#define HARDWAREINTERFACE_H

#include <string>
#include "../Devices/Device.h"

class HardwareInterface
{
public:
	virtual void init() = 0;
	virtual void updateDevices() = 0;
	virtual void sendCommand(Device d, std::string command) = 0;
	virtual void exit() = 0;
};

#endif /* HARDWAREINTERFACE_H */

