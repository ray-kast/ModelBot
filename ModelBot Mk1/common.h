Pid lDrivePid, rDrivePid;

void init() {
	initPid(&lDrivePid,
		DRIVE_PID_THRESH,
		DRIVE_PID_KP,
		DRIVE_PID_KI,
		DRIVE_PID_KD,
		DRIVE_PID_INTEGLIM,
		DRIVE_PID_SGNLOCK);

	initPid(&rDrivePid,
		DRIVE_PID_THRESH,
		DRIVE_PID_KP,
		DRIVE_PID_KI,
		DRIVE_PID_KD,
		DRIVE_PID_INTEGLIM,
		DRIVE_PID_SGNLOCK);

	//ctlLoopInterval = 50;
}

void updateCtl(float dt) {
}
