#pragma once
typedef enum {
    BKE_NO_COMM = 0,
    BKE_DRAW_VIEW,
    BKE_CLEAR,
    BKE_CLEAR_COLOR
} backendCommandID_t;

typedef struct {
    backendCommandID_t id;
} backenCommand_s;

class CommandBuffer {
public:
    backenCommand_s commands[8];

    int count;
};