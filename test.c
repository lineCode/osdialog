#include <stdlib.h>
#include <stdio.h>
#include "osdialog.h"


int main() {
	// Open file with default arguments
	{
		char *filename = osdialog_file(OSDIALOG_OPEN, NULL, NULL, NULL);
		if (filename) {
			printf("%s\n", filename);
			free(filename);
		}
	}

	// Save file with default arguments
	{
		char *filename = osdialog_file(OSDIALOG_SAVE, NULL, NULL, NULL);
		if (filename) {
			printf("%s\n", filename);
			free(filename);
		}
	}

	// Open file with custom arguments
	{
		char *filename = osdialog_file(OSDIALOG_OPEN, ".", "Untitled", NULL);
		if (filename) {
			printf("%s\n", filename);
			free(filename);
		}
	}

	// Save file with custom arguments
	{
		char *filename = osdialog_file(OSDIALOG_SAVE, ".", "Untitled", NULL);
		if (filename) {
			printf("%s\n", filename);
			free(filename);
		}
	}

	// Color selector
	{
		osdialog_color_picker();
	}
}