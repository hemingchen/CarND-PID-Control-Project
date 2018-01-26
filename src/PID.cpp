#include "PID.h"
#include <iostream>

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
  this->Kp = Kp;
  this->Ki = Ki;
  this->Kd = Kd;
  p_error = 0;
  i_error = 0;
  d_error = 0;
  total_cte = 0;
  prev_cte = 0;
}

void PID::UpdateError(double cte) {
  total_cte += cte;

  p_error = -Kp * cte;
  i_error = -Ki * total_cte;
  d_error = -Kd * (cte - prev_cte);

  prev_cte = cte;

  cout << "p_error: " << p_error << " i_error: " << i_error << " d_error: " << d_error << endl;
}

double PID::TotalError() {
  double total_error = p_error + i_error + d_error;

  return total_error;
}