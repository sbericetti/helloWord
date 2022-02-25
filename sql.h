#ifndef __SQL__
#define __SQL__

#include <stdbool.h>

typedef struct {
    int* ldsno;
    int* order;
    int* 
    enum actions a_perform;
    enum p_states m_state;
} sqlMission;

typedef struct {
    const char* host;
    const char* driver;
    const int* porta;
    const char* username;
    const char* password;
    sqlMission s_mission;
    enum com_modula_states cm_state;
} sqlServer;

typedef struct {
    const char* name;
    sqlServer server;
    enum socket_states s_state;  
} sqlConnection;


#endif