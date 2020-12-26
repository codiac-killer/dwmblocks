//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/	 	/*Update Interval*/	/*Update Signal*/
    // {" 🐧 ", "/opt/dwmblocks-distrotube-git/scripts/kernel",		    360,		        2},

	// {" 🔺 ", "/opt/dwmblocks-distrotube-git/scripts/upt",		        60,		            2},

	// {"", "pacpackages",		360,		        9},
	
	{"", "nettraf",	        1,		            0},
	
	{"", "cpubars",	        1,		            0},

	{"", "memory",	        1,		            0},

	{"", "gpu",	            1,		            0},

	{"", "keyboardlayout",	1,					      7},

	{"", "pulsevol",		    10,		            10},

	{"", "clock",			      5,		            0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '\0';
