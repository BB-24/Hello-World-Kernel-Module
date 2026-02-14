#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Your Name");
MODULE_DESCRIPTION("A simple hello world kernel module");
MODULE_VERSION("1.0");

static __init hello_init(void) {
    printk(KERN_INFO "Hello, World! This is a kernel module.\n");
    return 0; 
}

static __exit hello_exit(void) {
    printk(KERN_INFO "Goodbye, World! The kernel module is exiting.\n");
}

module_init(hello_init);
module_exit(hello_exit);