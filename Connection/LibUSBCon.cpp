/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LibUSBCon.cpp
 * Author: Jannled
 * 
 * Created on 11. Juli 2019, 13:27
 */

#include "LibUSBCon.h"
#include "USB_Names.h"

using namespace std;

LibUSBCon::LibUSBCon(USB_Names *usbNames)
{
	this->usbNames = usbNames;
}

LibUSBCon::LibUSBCon(const LibUSBCon& orig)
{
}

LibUSBCon::~LibUSBCon()
{
	libusb_free_device_list(list, deviceCount);
	libusb_exit(context);
}

void LibUSBCon::init()
{
	int libusbErr = libusb_init(&context);
	if(libusbErr != 0)
		cerr << "Failed to initialize libUSB! (" << libusbErr << ")" << endl;
	else
		cout << "Initialized libUSB" << endl;
}

void LibUSBCon::updateDevices()
{
	deviceCount = libusb_get_device_list(NULL, &list);
	cout << "Connected Devices: " << endl;
	
	for(int i=0; i<deviceCount; i++)
	{
		libusb_device *device = list[i];
		libusb_device_descriptor desc = {0};
		int rc = libusb_get_device_descriptor(device, &desc);
		if(rc != 0)
			cerr << "LibUSB failed to get one device descriptor!";
		
		printf("%04X:%04X, %s\n", desc.idVendor, desc.idProduct, usbNames->lookup(desc.idVendor).c_str());
	}
	cout << endl;
}

void LibUSBCon::sendCommand(Device d, std::string command)
{
	
}

void LibUSBCon::exit()
{
	
}
