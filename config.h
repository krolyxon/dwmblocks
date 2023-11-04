//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
        {"",	"sb-battery",	5,	3},
	{"",	"sb-music",	0,	11},
	{"",	"sb-volume",	10,	10},
	// {"",	"sb-updates",	360,	12},

	 {"",	"sb-memory",	5,	14},
	// {"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},

         {"",   "sb-clock",     60,      1},


};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
