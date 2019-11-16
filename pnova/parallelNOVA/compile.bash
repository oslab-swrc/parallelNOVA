#make LOCALVERSION=-qsin-segment-nova -j130
#make LOCALVERSION=-range-nova -j130
#make LOCALVERSION=-perloglock-devel -j130
make LOCALVERSION=-nova-cstlock -j130
make modules_install -j130
make install -j130
