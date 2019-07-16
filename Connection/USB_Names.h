/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   USB_Names.h
 * Author: jannl
 *
 * Created on 12. Juli 2019, 10:07
 */

#ifndef USB_NAMES_H
#define USB_NAMES_H

#include <map>

class USB_Names {
public:
	USB_Names(std::string filePath);
	USB_Names(const USB_Names& orig);
	virtual ~USB_Names();
	
	void parseIDS(std::string filePath);
	std::string lookup(uint16_t vendor, uint16_t name);
	std::string lookup(uint16_t vendor);
private:
	std::map<uint16_t, std::string> vendors;
};

#endif /* USB_NAMES_H */
