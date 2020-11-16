// Copyright (c) 2020 Marcus A. Mosley All rights reserved.
//
// Created by Marcus A. Mosley
// Created on November 2020
// This program finds the largest number of a random array of 10 numbers

#include <iostream>
#include <random>
#include <array>


int max_number(std::array<int, 10> number_array) {
    // This function finds the largest number of a random array of 10 numbers

    int largest_number = number_array[0];

    for (int counter = 0; counter < number_array.size(); counter++) {
        if (number_array[counter] > largest_number) {
            largest_number = number_array[counter];
        }
    }
    return largest_number;
}


int main() {
    // This function gets input

    std::array<int, 10> number_array;
    int number;
    int largest_number;

    // Input
    for (int counter = 0; counter < 10; counter++) {
        std::random_device random_device;
        std::mt19937 engine{random_device()};
        std::uniform_int_distribution<> dist(1, 100);
        number = dist(engine);
        number_array[counter] = number;
         std::cout << "The random number is: "
            << std::fixed << number << std::endl;
    }
    std::cout << " " << std::endl;

    // Call Functions
    largest_number = max_number(number_array);

    std::cout << "The largest number is " << largest_number << std::endl;
}
