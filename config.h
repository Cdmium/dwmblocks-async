#define CMDLENGTH 100
#define DELIMITER "|"
#define CLICKABLE_BLOCKS

const Block blocks[] = {
	BLOCK("sb-gpu",		1,	10),
	BLOCK("sb-cpu",		1,	9),
	BLOCK("sb-ram",		1,	8),
	BLOCK("sb-disk",	60,	7),	
	BLOCK("sb-nettraffic",	1,	6),
	BLOCK("sb-volume",	1,	5),
	BLOCK("sb-mic",		1,	4),
	BLOCK("sb-internet",	5,	3),
	BLOCK("sb-battery",	5,	2),
	BLOCK("sb-clock",	1,	1)
};
