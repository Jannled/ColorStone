/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LibUSB.h
 * Author: jannled
 *
 * Created on 11. Juli 2019, 13:27
 */

#ifndef LIBUSBCON_H
#define LIBUSBCON_H

#include <iostream>
#include "../include/libusb.h"

#include "HardwareInterface.h"

class LibUSBCon: public HardwareInterface {
public:
	LibUSBCon();
	LibUSBCon(const LibUSBCon& orig);
	virtual ~LibUSBCon();
	
	void init();
	void updateDevices();
	void sendCommand(Device d, std::string command);
	void exit();
private:
	int deviceCount;
	libusb_device **list;
	libusb_context *context;

};

#endif /* LIBUSBCON_H */

