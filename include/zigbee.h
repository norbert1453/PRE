/*----------------------------------ZIGBEE.H----------------------------------*/
/*
 *> [File Name] zigbee.h
 *> [Platform] PRE ENIB
 *> [Version] alpha
 *> [Author] Richard
 *> [Language] C
 *> [Description] ZIGBEE API : 
 *> allows communication with the ZIGBEE
 */
#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <termios.h>


#define LENGTH(x) (sizeof(x) / sizeof((x)[0]))

int str2hex(char*,int8_t*);
int initport(int);
int open_port(int);
int checksum(unsigned short*);
int sendFrameType(int serial_fd, int8_t type, char* data, int8_t frame_id, int64_t dest64, int16_t dest16 );
int sendAT(int, char*);
int send(int, int, unsigned short*);
int receive(int);
int main(void);


#endif




