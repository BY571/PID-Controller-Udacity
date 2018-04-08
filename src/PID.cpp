#include "PID.h"
#include <algorithm>

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
    // Init
    this->Kp = Kp;
    this->Ki = Ki;
    this->Kd = Kd;

    p_error = 0.0;
    i_error = 0.0;
    d_error = 0.0;



    // Overall Errors
    //errorSum = 0.0;
    //errorMin = numeric_limits<double>::max();
    //errorMax = numeric_limits<double>::min();
    // calculating counter
    //steps = 0;
}

void PID::UpdateError(double cte) {
    //Calculate errors 
    // Diferential error.
    d_error = cte - p_error;
    // Proportional error.
    p_error = cte;
    // Integral error.
    i_error += cte;


}


double PID::TotalError() {
     return p_error * Kp + i_error * Ki + d_error * Kd;
}

