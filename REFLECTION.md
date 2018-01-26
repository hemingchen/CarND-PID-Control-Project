# Reflection

## Effects of Kp, Ki, Kd parameters

### Kp

* Helps steer in proportion to the crosstrack error
* Leads to overshoot

Selected value: Kp = 1.0

In my test, the car experienced quicker/shaper turns as Kp grows from 0.1 to 2.0. While Kp was small, e.g. 0.1, the car couldn't turn back to the center of the lane quick enough therefore went off the road. While Kp was too big, e.g. 2.0, the car experienced more oscillations around the norminal trajactory and also went off the road when the oscillation became too big. Eventually, with the selection of other parameters, Kp=1.0 turned out the best, which turned car quick enough to correct errors while not causing too much oscillation.

### Ki

* Helps correct the steer properly while system bias, e.g. drifting, exists, by taking historically accumulated error into account.

Selected value: Ki = 0.005

In my test, the car's driving performance wasn't as sensitive to this paramater as to the other two. After trying out the values between 0.001 and 0.01, I eventually kept the default value 0.005 learned from the quiz.


### Kd

* Helps counter steer to reduce overshooting caused by Kp

Selected value: Kd = 100.0

In my test, the car experienced more overshoot when Kp was too small, e.g. 5.0, which caused the car to go off road due to the overshoot. When Kp was too large, the car became less responsive in correcting steering angle therefore cannot follow curved road smoothly. Eventually, Kd=100.0 was used as a balance in between.


All hyperparameters were chosen manually during the test and twiddle was not used.
