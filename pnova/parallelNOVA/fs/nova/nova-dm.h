#ifndef __PNOVA_DM_H
#define __PNOVA_DM_H

#include "nova.h"
#include "super.h"

#define number_of_devices 8
typedef struct _nvmm_info
{
    void *virt_addr;
    const char *host;
    long size;
    struct dax_device *dax_dev;
    pfn_t __pfn_t;
}dm_nvmm_info;

dm_nvmm_info *multi_pm[number_of_devices];

//void multi_dev_mount(struct super_block *sb, struct nova_sb_info *sbi);


#endif
