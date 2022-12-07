#include <linux/module.h>
#include <linux/uaccess.h>
#include <linux/fs.h>
#include <linux/init.h>
#include <linux/slab.h>
#include <linux/cdev.h>

static int __init init_example()
{
  printk( KERN_INFO "Experimental module" );
  return 0;
}

static void __exit cleanup_example(void)
{
  printk( KERN_INFO "Unconnect" );
}

module_init (init_example);
module_exit (cleanup_example);

MODULE_LICENSE("GPL");
