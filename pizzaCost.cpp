// Copyright (c) 2023 Santiago Hewett All rights reserved.
//
// Created by: Santiago Hewett
// Date: Sep 30, 2023
// This program asks the user for the size in inches of their pizza and then
// displays the subtotal, tax and total.

#include <iostream>
// Include this for std::setprecision
#include <cmath>
#include <iomanip>


int main() {
    // declare variables
    float diameterInInches;
    float subtotal;
    float tax;
    float total;

    // declare constants
    const float RENT = 2.25;
    const int LABOR = 2.00;
    const float HST = 0.13;

    // get the diameter in inches from the user and display message
    std::cout << "This program will calculate the subtotal, ";
    std::cout << "tax and total of a pizza ";
    std::cout << "with your size input in inches. ";
    std::cout << "Enter the size (in): ";
    std::cin >> diameterInInches;

    // declare constant
    const float MATERIALS = 1.50 * diameterInInches;

    // calculate the subtotal
    subtotal = RENT + LABOR + MATERIALS;

    // calculate the tax
    tax = subtotal * HST;

    // calculate the total
    total = subtotal + tax;

    // display the subtotal to the user
    std::cout << "\n";
    std::cout << "The subtotal of the pizza is ";
    std::cout << "Subtotal = " << std::fixed << std::setprecision(2)
              << "$" << subtotal << std::endl;

    // display the tax to the user
    std::cout << "\n";
    std::cout << "The tax of the pizza is ";
    std::cout << "Tax = " << std::fixed << std::setprecision(2)
              << "$" << tax << std::endl;

    // display the total to the user
    std::cout << "\n";
    std::cout << "The total of the pizza is ";
    std::cout << "Total = " << std::fixed << std::setprecision(2)
              << "$" << total << std::endl;
}
