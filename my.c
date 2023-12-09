#include<linux/module.h>
#include<linux/init.h>

/*Programme information*/
MODULE_LICENSE("GPL");
MODULE_AUTHOR("APOORV SETH");
MODULE_DESCRIPTION("Simple code to print 'Hello JK SEL!' via Kernel Module");

/*Initialising the FUNCTION via __init. It will be called when the module is loaded into KERNEL*/

static int __init ModuleInit(void) {
	printk("Hello JK SEL!\n");
	return 0;
}

/*This function will be called when module is removed from the KERNEL*/

static void __exit ModuleExit(void) { 
	printk("Goodbye! See you soon.\n");
}

module_init(ModuleInit);
module_exit(ModuleExit);
