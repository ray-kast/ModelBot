task lcd() {
	while (true) {
		clearLCD();

		displayLCDCenteredString(0, BOT_DISPLAY_NAME);
		displayLCDCenteredString(1, BOT_DISPLAY_TAGLINE);

		wait1Msec(50);
	}
}
