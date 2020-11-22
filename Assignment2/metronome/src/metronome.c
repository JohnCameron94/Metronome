#include <stdio.h>
#include <stdlib.h>

/* Function Declaration */
void usage();

struct DataTableRow t[] = {
		{2, 4, 4, "|1&2&"},
		{3, 4, 6, "|1&2&3&"},
		{4, 4, 8, "|1&2&3&4&"},
		{5, 4, 10, "|1&2&3&4-5-"},
		{3, 8, 6, "|1-2-3-"},
		{6, 8, 6, "|1&a2&a"},
		{9, 8, 9, "|1&a2&a3&a"},
		{12, 8, 12, "|1&a2&a3&a4&a"}
};

int main(int argc, char *argv[]) {

	if (argc != 3){
		printf("ERROR: You must provide all required arguments.\n");
		usage();
		exit(EXIT_FAILURE);
	}
}

void usage(){
	printf("Command: ./metronome <beats/minute> <time-signature-top> <time-signature-bottom>\n");
}
