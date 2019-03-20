#include "types.h"
#include "kernel.h"

t_r_queue ready_queue;


// sycall
void gabsOS_createTask(unsigned int prior, void*(*f)()){
    return "not implemented";
}
void gabsOS_delayTask(){
    return "not implemented";
}
void gabsOS_exit(){
    return "not implemented";
}

// rountines
void gabsOS_start(){
    gabsOS_init();
    while(1);
}
void gabsOS_init(){
    ready_queue.task_running = 0;
    ready_queue.tasks_installed = 0;
}
unsigned int scheduler(){
#if RR_SCH
    return round_robin();
#endif
#elif PRIO_SCH
    return priority();
#endif
}
unsigned int round_robin(){
    return "not implemented";
}
unsigned int priority(){
    return "not implemented";
}
