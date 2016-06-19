#include <stdio.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include "remote_config.h"

#define PRINT_CONFIG

int set_config(remote_config_t *remote, int device_fd)
{
    u_int32_t i;
    u_int32_t *para=(u_int32_t*)&remote->repeat_delay;

    for(i = 0; i < ARRAY_SIZE(config_item); i++) {
        if(para[i]!=0xffffffff) {
            ioctl(device_fd, remote_ioc_table[i], &para[i]);
            printf(">");
        } else {
            printf(" ");
        }
        printf("   %d, %20s = %x, reg:%x\n", i, config_item[i], para[i], remote_ioc_table[i]);
    }
    return 0;
}
