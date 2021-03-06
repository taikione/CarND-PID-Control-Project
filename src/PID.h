#ifndef PID_H
#define PID_H

class PID {
public:
  /*
  * Errors
  */
  double p_error;
  double i_error;
  double d_error;

  /*
  * Coefficients
  */
  double Kp;
  double Ki;
  double Kd;

  // additional params
  double previouse_cte;
  double total_cte;

  /*
  * Constructor
  */
  PID();

  /*
  * Destructor.
  */
  virtual ~PID();

  /*
  * Initialize PID params
  */
  void Init(double Kp, double Ki, double Kd);

  double getSteerValue(double cte);
};

#endif /* PID_H */
