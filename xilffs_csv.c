#include "xilffs_csv.h"

void setFileName(char *FileNameLocal){
	*FileName = &FileNameLocal;
}

void openFile(char *FileName){
	f_open(&FileName, SD_File, FA_CREATE_ALWAYS | FA_WRITE);
}


void closeFile(char *FileName){
	f_close(&FileName);
}


void addValueRow(char *Ptr, int pos, int value);



void addValueRow(char *Ptr, int pos, int value){

}



void writeCol(char *File, char *Ptr){

}
