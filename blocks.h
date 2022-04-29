//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"🆓 ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},

	{"", "today",					30,		0},
	{"", "volume", 		5,  		22},
	//{" ", "brightness", 	1, 		23},
	//{"", "battery",	1, 0},
	{"", "nettraf", 		1, 24 },
	{"", "internet", 0, 25},
	{"", "forecast", 43200, 26}
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 3;
