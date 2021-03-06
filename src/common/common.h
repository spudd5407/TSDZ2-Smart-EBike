/*
 * TongSheng TSDZ2 motor controller firmware/
 *
 * Copyright (C) Casainho, 2018.
 *
 * Released under the GPL License, Version 3
 */

#ifndef COMMON_COMMON_H_
#define COMMON_COMMON_H_

#define NO_ERROR                                0
#define ERROR_NO_CONFIGURATIONS                 (1 << 1)
#define ERROR_MOTOR_BLOCKED                     (1 << 2)
#define ERROR_TORQUE_APPLIED_DURING_POWER_ON    (1 << 3)
#define ERROR_BRAKE_APPLIED_DURING_POWER_ON    	(1 << 4)
#define ERROR_THROTTLE_APPLIED_DURING_POWER_ON  (1 << 5)

//#define ERROR_NO_SPEED_SENSOR_DETECTED          (1 << 6)
//#define ERROR_LOW_CONTROLLER_VOLTAGE            (1 << 7) // controller works with no less than 15 V so give error code if voltage is too low

#define ERROR_HALL_SENSORS          		(1 << 6)
#define ERROR_OVER_CURRENT	                (1 << 7)

#endif /* COMMON_COMMON_H_ */
