#include "PID.h"
#include <math.h>
#include <numeric>

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {
  previouse_cte = 0.0;
  Kp = 1.0;
  Ki = 0.0;
  Kd = 0.0;
  total_cte = 0.0;
}

PID::~PID() {}

void PID::Init(double tau_p, double tau_i, double tau_d) {
  Kp = tau_p;
  Ki = tau_i;
  Kd = tau_d;
}

void PID::UpdateError(double cte) {
}

double PID::getTotalError() {
}

double PID::getSteerValue(double cte) {

  p_error = cte;
  i_error += cte;
  d_error = cte - previouse_cte;

  previouse_cte = cte;

  double steer_value = -Kp*p_error - Kd*d_error- Ki*i_error;

  return steer_value;
}

//double PID::twiddleParams(double cte, double angle) {
//  double predict_angle;
//  std::vector<double> params = {Kp, Ki, Kd};
//
//  while(params[0]+params[1]+params[2] > 0.2){
//
//    for(int i=0; i<params.size(), ++1){
//
//    }
//     if (cte > previouse_cte + 0.2) {
//        params[i] = params[i] * 1.1;
//        predict_angle = getSteerValue(cte);
//
//      } else if (cte < previouse_cte - 0.2)
//        params[i] = params[i] - params[i] * 2;
//        predict_angle = getSteerValue(cte)
//     }
//  }
//  return Kp;
//}
