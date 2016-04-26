#ifdef SKILLS_PRGM
task auton() {
	DriveStraight(127);

	wait1Msec(1000);

	DriveStraight(0);
}
#else
task auton() {
	DriveStraight(127);

	wait1Msec(500);

	DriveStraight(0);
}
#endif

void endAuton() {
}
