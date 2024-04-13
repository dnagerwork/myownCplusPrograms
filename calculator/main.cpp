#include <stdio.h>
#include <iostream>
#include "basic_operations.h"
#include "shift_operations.h"
#include "alpha_operations.h"
#include "arrow_controls.h"
#include "black_buttons.h"
#include "red_buttons.h"

int main(){
    /* My intention is to clone the functionality of calculator CASIO fx-82MS
     * Shift, Alpha, (left, up, right, down, replay), mode, on
     * x-1/x!, nCr/nPr, Pol(/Rec( :, x3/square3
     * Ab/c/d/c, square, x2, log/10x, ln/ex e
     * (-)/A, .'''/<- B, hyp/C, sin/sin-1 D, cos/cos-1 E, tan-1/F
     * RCL/STO, END/<-, (, )/X, ,/; Y, M+/M- M (dt cl)
     * 7, 8, 9, DEL/INS, AC/OFF
     * 4, 5, 6, X, /
     * 1/s-sum, 2/s-var, 3, +, -
     * 0/Rnd, ./Ran#, exp/PI, Ans/DRG, =/%
     * */ 
    basic_operations basicOperations;
    shift_operations shiftOperations;
    alpha_operations alphaOperations;
    std::cout << "Hello world" << std::endl;
    std::cout << "The result of multiplation is: " << basicOperations.multiply(5,4) << std::endl;
    std::cout << "The result of division is: " << basicOperations.divide(5,4) << std::endl;
    std::cout << "The result of sum is: " << basicOperations.sum(5,4) << std::endl;
    std::cout << "The result of substract is: " << basicOperations.substract(5,4) << std::endl;
    std::cout << "The value of operation A of alpha is: " << alphaOperations.operation.A << std::endl;
    alphaOperations.operation.A = 1;
    std::cout << "The value of operation A of alpha is: " << alphaOperations.operation.A << std::endl;
    return 0;
}
