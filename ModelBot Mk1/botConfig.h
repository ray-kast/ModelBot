#define LCD

#define DRIVE_PID_THRESH 20
#define DRIVE_PID_KP .5
#define DRIVE_PID_KI .1
#define DRIVE_PID_KD .3
#define DRIVE_PID_INTEGLIM 127
#define DRIVE_PID_SGNLOCK false

#define SetLeftDrive(val) motor[flWheel] = motor[blWheel] = val
#define SetRightDrive(val) motor[frWheel] = motor[brWheel] = val

#define DriveStraight(val) SetLeftDrive(SetRightDrive(val))

#define BOT_DISPLAY_NAME "ModelBot Mk.I"
#define BOT_DISPLAY_TAGLINE "4800Buckets"
