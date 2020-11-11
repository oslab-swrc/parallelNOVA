# parallelNOVA
A variant of NOVA filesystem optimized for a parallel write to a single file

# parallelNOVA: Parallel NOn-Volatile memory Accelerated log-structured file system

ParallelNOVA is a variance of [NOVA][NOVA]. It aims to parallelize simultaneous writes to a same file using [range rwlock] by allowing multiple threads that perform write to mutually exclusive ranges. ParallelNOVA is under development by the [Distributed and Cloud Computing Laboratory][DCC] in the [Department of Computer Science and Engineering][CS] at the [Sogang University, Seoul, Korea][SG].

[NOVA]: https://github.com/NVSL/linux-nova
[DCC]: http://dcclab.sogang.ac.kr/
[SG]: http://sogang.ac.kr/index.do
[CS]: http://cs.sogang.ac.kr/sub_kor/index.php

# HOW TO USE
To insert the NOVA mode with `n` CPU(s): 

`insmod [NOVA_kernel_root_directory]/fs/nova/nova.ko cpu_num=n`

To mount the NOVA filesystem:

`mount -t NOVA -o init /dev/[pmem_device_name] [mount_point]`
