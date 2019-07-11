/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jannled
 *
 * Created on 30. Juni 2019, 23:42
 */

#include <iostream>
#include <stdio.h>
#include "Devices/Device.h"
#include "Connection/LibUSBCon.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv)
{
	cout << "Launched with arguments [";
	for(int i=0; i<argc; i++)
		cout << argv[i] << ((i < argc-1) ? "," : "");
	cout << "]" << endl;
	
	//Print OS
	cout << "Operating system: ";
#if defined _WIN32 || _WIN64
	cout << "Windows" << endl;
#elif defined __linux__
	cout << "Linux" << endl;
#elif defined __MACH__ || __APPLE__
	cout << "Apple" << endl;
#else 
	cout << "Unknown" << endl;
#endif
	
	LibUSBCon lusbcon;
	lusbcon.init();
	lusbcon.updateDevices();
	
	Device d("Logitech", "G213 Prodigy");
	cout << "Geräte: " << d.getName() << endl;
	
	return 0;
}

