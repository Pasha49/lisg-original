#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x7f5e92c0, "module_layout" },
	{ 0x709f92e9, "xt_unregister_target" },
	{ 0x73767ae2, "kmalloc_caches" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xd53c67b3, "unregister_net_sysctl_table" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2d5f69b3, "rcu_read_unlock_strict" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb578fc5, "memset" },
	{ 0x32fbbe25, "unregister_pernet_subsys" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xc5850110, "printk" },
	{ 0x48427dbe, "netlink_kernel_release" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc8237d4b, "netlink_unicast" },
	{ 0x81af8753, "xt_register_target" },
	{ 0xcaaab325, "__alloc_skb" },
	{ 0xd691c6a9, "unregister_sysctl_table" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x57d7f68d, "kfree_skb" },
	{ 0x7dbafa4c, "xt_unregister_match" },
	{ 0xeaf00631, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6998678f, "kmem_cache_alloc_trace" },
	{ 0x30da2f05, "__netlink_kernel_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x848d20c0, "xt_register_match" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x2d1c24f, "register_net_sysctl" },
	{ 0xc4b60c07, "param_ops_uint" },
	{ 0xd75cf21d, "skb_copy_bits" },
	{ 0x4b85b9fe, "__nlmsg_put" },
	{ 0x23cabbb1, "register_sysctl_paths" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FD350DC170E5446AC8615CF");
