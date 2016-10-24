#include "main.h"
#include "compDefaults.h"

void operatorControl() {
	while (1) {

		#include "main.h"

		void operatorControl() {
			while (1) {

				// Master Joystick Channels...
				int joy1 = joystickGetAnalog(1, 1);
				int joy2 = joystickGetAnalog(1, 2);
				int joy3 = joystickGetAnalog(1, 3);
				int joy4 = joystickGetAnalog(1, 4);

				// Holonomic Drive Calculations...
				motorSet(2, -(joy3 - joy1 - joy4)); // Front Right Drive
				motorSet(3, -(joy3 - joy1 + joy4)); // Back Right
				motorSet(4, (joy3 + joy1 + joy4)); // Front Left
				motorSet(5, (joy3 + joy1 - joy4)); // Back Left

				delay(20);
			}
		}


		delay(20);
	}
}
