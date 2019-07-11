/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Logitech_G213.h
 * Author: jannled
 *
 * Created on 30. Juni 2019, 23:16
 */

#ifndef LOGITECH_G213_H
#define LOGITECH_G213_H

#include "../lib/ColorLib.h"
#include "Device.h"

class Logitech_G213: public Device 
{	
	//Logitech G213 Prodigy vars
	char* standardColorHex	= 'ffb4aa';	// Standard color, i found this color to produce a white color on my G213
	hex4 idVendor			= 0x046d;			// The id of the Logitech company
	hex4 idProduct			= 0xc336;			// The id of the G213
	hex2 bEndpointAddress	= 0x82;				// Endpoint to read data back from
	hex2 bmRequestType		= 0x21;				// --.
	hex2 bmRequest			= 0x09;				//    \ The controll transfer
	hex4 wValue				= 0x0211;		    //    / configuration for the G213
	hex4 wIndex				= 0x0001;			// --'
	char* colorCommand		= '11ff0c3a{}01{}0200000000000000000000';   // binary commands in hex format, always 20 byte long
	char* breatheCommand	= '11ff0c3a0002{}{}006400000000000000';
	char* cycleCommand		= '11ff0c3a0003ffffff0000{}64000000000000';
	char* device			= '';			// device resource
	bool isDetached			= false;		// If kernel driver needs to be reattached
	
public:
	Logitech_G213();
	Logitech_G213(const Logitech_G213& orig);
	virtual ~Logitech_G213();
private:

};

#endif /* LOGITECH_G213_H */

