cmd_/home/atarget/lisg/kernel/modules.order := {   echo /home/atarget/lisg/kernel/ipt_ISG.ko; :; } | awk '!x[$$0]++' - > /home/atarget/lisg/kernel/modules.order
