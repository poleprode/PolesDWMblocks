//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/			/*Update Interval*/ /*Update Signal*/
	{"",	"$HOME/.config/dwmblocks/scripts/ssh",		0,	7},
	{"",	"$HOME/.config/dwmblocks/scripts/bluetooth",	0,	6},
	{"",	"$HOME/.config/dwmblocks/scripts/music",	10,	5},
	{"",	"$HOME/.config/dwmblocks/scripts/volume",	0,	4},
	{"",	"$HOME/.config/dwmblocks/scripts/cpu",		5,	3},
	{"",	"$HOME/.config/dwmblocks/scripts/ram",		10,	2},
	{"",	"$HOME/.config/dwmblocks/scripts/clock",	60,	1},	
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " ";
static unsigned int delimLen = 5;
