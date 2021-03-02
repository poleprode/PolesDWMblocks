//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/			/*Update Interval*/ /*Update Signal*/
	{"",	"$XDG_CONFIG_HOME/dwmblocks/scripts/music",	10,	5},
	{"",	"$XDG_CONFIG_HOME/dwmblocks/scripts/volume",	0,	4},
	{"",	"$XDG_CONFIG_HOME/dwmblocks/scripts/cpu",	5,	3},
	{"",	"$XDG_CONFIG_HOME/dwmblocks/scripts/ram",	10,	2},
	{"",	"$XDG_CONFIG_HOME/dwmblocks/scripts/clock",	60,	1},	
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " ";
static unsigned int delimLen = 5;
