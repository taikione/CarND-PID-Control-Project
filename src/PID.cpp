#include "PID.h"
#include <math.h>
#include <numeric>
#include <vector>

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {
  p_error = 0.0;
  i_error = 0.0;
  d_error = 0.0;
  previouse_cte = 0.0;
}

PID::~PID() {}

void PID::Init(double tau_p, double tau_i, double tau_d) {
  Kp = tau_p;
  Ki = tau_i;
  Kd = tau_d;
}

double PID::getSteerValue(double cte) {

  p_error = cte;
  i_error += cte;
  d_error = cte - previouse_cte;

  previouse_cte = cte;

  return  -Kp*p_error - Kd*d_error- Ki*i_error;
}

