// Copyright (c) 2019 Andrei Chirilov All rights reserved.
//
// Created by: Andrei Chirilov
// Created on: October 2019
// This program does DO looping

#include <iostream>
#include <string>

int main() {
    int answer = 1;
    int counter = 0;
    int integer = 0;

    std::cout << "What is your number: " << std::endl;
    std::cin >> integer;

    do {
        counter += 1;
        answer = answer * counter;
    } while (counter < integer);
    std::cout << "The answer is " << answer << std::endl;
}
