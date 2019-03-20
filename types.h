 
#ifndef TYPES.H
#define	TYPES.H
#include "config.h"
#define STACK_SIZE 31

typedef unsigned int t_id;
typedef unsigned char byte;
typedef enum {READY = 0, RUNNING, WAITING, FINISHED} t_state;

typedef struct stack {
    int stack_level;
    byte h_stack[STACK_SIZE];
} t_stack;

typedef struct pcb {
    unsigned int TASK_prior;
    t_id task_id;
    t_state STATUS_reg;
    t_stack task_stack;
    byte PC_reg;
    byte W_reg;
    byte STATUS_reg;
    void *(*task_f)();
} t_pcb;

typedef struct r_queue {
    t_pcb tasks[MAX_TASKS];
    unsigned int tasks_installed;
    unsigned int task_running;
} t_r_queue;




#endif