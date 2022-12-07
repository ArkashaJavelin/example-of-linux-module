#include <linux/module.h>

int init_module()
{
  printk( KERN_INFO "Experimental module" );
}

void cleanup_module(void)
{
  printk( KERN_INFO "Unconnect" );
}

MODULE_LICENSE("GPL");
