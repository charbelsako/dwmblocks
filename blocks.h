//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},

	{" ", "date '+%a %b %d %I:%M%p'",					5,		0},
	{"", "~/.local/bin/statusbar/volume", 		5,  		22},
	{" ", "~/.local/bin/statusbar/brightness", 	1, 		23},
	{"", "~/.local/bin/statusbar/battery",	1, 23},
	{"", "~/.local/bin/statusbar/nettraf", 		1, 24 },
	{"", "~/.local/bin/statusbar/internet", 1, 25},
	{"", "~/.local/bin/statusbar/forecast", 43200, 26}
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
