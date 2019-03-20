/* 
 * File:   kernel.h
 * Author: gabriel.ghellere
 *
 * Created on March 20, 2019, 3:32 PM
 */

#ifndef KERNEL_H
#define	KERNEL_H



// sycall
void gabsOS_createTask(unsigned int prior, void*(*f)());
void gabsOS_delayTask();
void gabsOS_exit();

// rountines
void gabsOS_start();
void gabsOS_init();
unsigned int scheduler();
unsigned int round_robin();
unsigned int priority();


#endif	/* KERNEL_H */
