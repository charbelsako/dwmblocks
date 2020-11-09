//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},

	{" ", "date '+%a %b %d %I:%M%p'",					5,		0},
	{"", "~/.local/bin/statusbar/volume", 							1,  		22},
	{"", "~/.local/bin/statusbar/brightness", 						1, 		23}
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;