#include <stdint.h> 

typedef enum {
    IS_BOOTING,
    SYSTEM_IS_READY, 
    SYSTEM_SLEEPING, 
    SYSTEM_FAULT,  
    SYSTEM_RECOVERY,
} SYSTEM_STATES; 