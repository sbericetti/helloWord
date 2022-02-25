#ifndef __SQL__
#define __SQL__

#include <stdbool.h>

enum sqlactions {
    Connessione,
    Disconnessione,
    Select,
    Update
};

typedef struct {
    int* ldsno;
    int* status1_2;
    int* step1_2;
    enum sqlactions sa_perform;
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
    enum socket_states s_state;  sq
} sqlConnection;


#endif