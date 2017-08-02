Reflection

#### Describe the effect each of the P, I, D components had in your implementation.

In this project, the effect on each parameter was as follows.
- When value of P is increased, Steering Value changes sensitively to CTE. However, even if P value was set large, CTE did not stable and car only repeated overshoot.
- Value of D is contribute to safe driving. If D value was set large, CTE becomes stable. But if D value is too large, CTE was unstable.
- Value of I has the effect of preventing continuous recording a small CTE. In this project, if the value of I is too large, CTE was increased continuously.


#### Describe how the final hyperparameters were chosen.

At first, I was set the values of P and D to 1 and 10 as initial values. After that, I was gradually reduced both values.
Next, I was set the value of I to 1.0, after that, I was gradually reduced value of I. When the value of I reached 0.00065, I was tuned P and D again.
Throughout this project, I did not use negative value during hyperparameters tuning.
