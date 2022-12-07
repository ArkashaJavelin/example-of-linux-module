obj-m += example.o

all:
	make -C /lib/modules/$(shell uname -r)/build modules

clean:
	make -C /lib/modules/$(shell uname -r)/build clean

load: all
	sudo insmod example.ko
	sudo dmesg -c

unload:
	sudo rmmod example.ko
	sudo dmesg -c
