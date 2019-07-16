/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   USB_Names.cpp
 * Author: Jannled
 * 
 * Created on 12. Juli 2019, 10:07
 */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string.h>

#include "USB_Names.h"

USB_Names::USB_Names(std::string filePath)
{
	parseIDS(filePath);
}

USB_Names::USB_Names(const USB_Names& orig)
{
	
}

USB_Names::~USB_Names()
{
	
}

void USB_Names::parseIDS(std::string filePath)
{
	std::cout << "Loading USB Ids: " << filePath << std::endl;
	std::ifstream inFile;
	inFile.open(filePath, std::ifstream::in);
	if(!inFile)
		std::cerr << "Failed to open file: " << filePath << std::endl;
	
	int anzVendors;
	
	std::string line;
	while(std::getline(inFile, line))
	{	
		//End of USB IDs
		if(0 == strncmp(line.c_str(), "# List of known device classes", 10)) break;
		
		//Line is a comment or empty
		if(line[0] == '#' || line.size() < 2) continue;
		
		int t = 0; //Number of tabs
		if(line[0] == '\t') continue;
		
		std::string name(line, t+6, line.size()-t-1);
		uint16_t id = strtol(line.c_str(), NULL, 16);
		
		vendors.insert(std::make_pair(id, name));
		anzVendors++;
	}
	
	std::cout << "Number of read vendors: " << anzVendors << std::endl;
}

std::string USB_Names::lookup(uint16_t vendor, uint16_t name)
{
	return "Not implemented yet!";
}

std::string USB_Names::lookup(uint16_t vendor)
{
	return vendors.at(vendor);
}
