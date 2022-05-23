// Copyright (c) 2022 St. Mother Teresa HS All rights reserved.
//
// Created by: Andrew
// Created on: May 2022
// This program calculates the area of a triangle

#include <iostream>

void CalculateArea(int base, int height) {
    // calculate area
    int area;

    // process
    area = base * height / 2;

    // output
    std::cout << "The area is " << area << " cm²" << std::endl;
}

main() {
    // this function gets length and width

    std::string baseAsString;
    std::string heightAsString;
    int baseFromUser;
    int heightFromUser;

    try {
        // input
        std::cout << "Enter the base of the triangle (cm): ";
        std::cin >> baseAsString;
        baseFromUser = std::stoi(baseAsString);

        std::cout << "Enter the height of the triangle (cm): ";
        std::cin >> heightAsString;
        heightFromUser = std::stoi(heightAsString);
        std::cout << std::endl;


        // call functions
        CalculateArea(baseFromUser, heightFromUser);
    } catch (std::invalid_argument) {
        std::cout << "\nPlease enter an integer" << std::endl;
    }
}
