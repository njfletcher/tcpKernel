#include <linux/init.h> 
#include <linux/module.h> 
#include <linux/printk.h>
 
static int __init tcp_init(void) 
{ 
	    pr_info("tcp init\n"); 
	        return 0; 
} 
 
static void __exit tcp_exit(void) 
{ 
	    pr_info("tcp exit\n"); 
} 
 
module_init(tcp_init); 
module_exit(tcp_exit); 
 
MODULE_LICENSE("GPL");
