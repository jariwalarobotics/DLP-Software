#ifndef DEFINITIONS_H
#define DEFINITIONS_H

typedef int (* AHID_INIT)(int, unsigned char *);
typedef int (* AHID_REGISTER)(int *, unsigned int, unsigned int, int,
                              unsigned char, unsigned char, unsigned char);
typedef int (* AHID_DEREGISTER)(int);
typedef int (* AHID_FIND)(int);
typedef int (* AHID_IDENTIFY)(int, unsigned char *, unsigned int);
typedef int (* AHID_REQUEST)(int);
typedef int (* AHID_READ)(int, unsigned char *, unsigned int, unsigned int *);
typedef int (* AHID_WRITE)(int, unsigned char *, unsigned int, unsigned int *);
typedef int (* AHID_INFO)(void);

// Definitions
#define AHID_OK                     0

#define AHID_REPTYPE_INT_IN			0
#define AHID_REPTYPE_INT_OUT		1
#define AHID_REPTYPE_FEATURE		2

#define PIPE_COUNT_MAX				2
#define TMP_BUFFER_SIZE				1024
#define TMP_BUFFER_SMALL_SIZE		24
#define TMP_BUFFER_VERY_SMALL_SIZE	3
#define PACKET_COUNT_MAX			5000
#define PACKET_SIZE_MAX				64
#define PATH_OFFSET                 8
#define LIST_WIDGET_COUNT_MAX       99

#define AHID_READ_INTERVAL			10
#define AHID_FIND_INTERVAL			100


#endif // DEFINITIONS_H
