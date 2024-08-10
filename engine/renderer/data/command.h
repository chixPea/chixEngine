#pragma once
typedef enum {
    BKE_NO_COMM = 0,
    BKE_DRAW_VIEW,
} backendCommand_t;

typedef struct {
	backendCommand_t commandId, *next;
} emptyBackEndCommand_t;