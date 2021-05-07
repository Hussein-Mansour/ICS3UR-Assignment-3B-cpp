// Copyright (c) 2021 Hussein Mansour All rights reserved
//
// Created by: Hussein Mansour
// Created on: Wed/May5/2021
// This program is a package checker program

#include <iostream>

int main() {
    // this function checks if the package is accepted or not
    std::cout << "Hello and Welcome" <<
    "our company wants to ask you for some information before entering!"
    << std::endl;

    int weight;

    int length;
    int width;
    int height;
    int volume;
    // input
    std::cout << "\nWeight of package:" << std::endl;
    std::cout << "Enter the weight (kg): ";
    std::cin >> weight;

    std::cout << "\nVolume of package:" << std::endl;
    std::cout << "Enter the length (cm): ";
    std::cin >> length;
    std::cout << "Enter the width (cm): ";
    std::cin >> width;
    std::cout << "Enter the height (cm):";
    std::cin >> height;

    // process 1
    volume = length*width*height;

    // process 2
    if ((weight <= 27)&&(volume <= 10000)) {
        std::cout << "\nyour package is accepted, you can enter." << std::endl;
    } else if ((weight >= 27)&&(volume >= 10000)) {
        std::cout << "\nyour package is not accepted" << std::endl;
        std::cout <<
        "your weight should not be larger than 27 (kg)."
        << std::endl;
        std::cout <<
        "your volume should not be larger than 10,000 cubic cm."
        << std::endl;
    } else if  (weight >= 27) {
        std::cout << "\nyour package is not accepted" << std::endl;
        std::cout <<
        "your weight should not be larger than 27 (kg)."
        << std::endl;
    } else if  (volume >= 10000) {
        std::cout << "\nyour package is not accepted" << std::endl;
        std::cout <<
        "your volume should not be larger than 10,000 cubic cm."
        << std::endl;
    } else {
        std::cout << "please check your info again!" << std::endl;
    }

    std::cout << "Thank You." << std::endl;
}
