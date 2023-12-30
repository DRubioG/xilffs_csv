#include "xsdps.h"		/* SD device driver */
#include "ff.h"

static char *FileName = "Test.csv";

void openFile(char *FileName);

void closeFile(char *FileName);

void setFileName(char *FileNameLocal);

void addValueRow(char *Ptr, int pos, int value);

void writeCol(char *File, char *Ptr);
