#
# Regular cron jobs for the xfwm4 package
#
0 4	* * *	root	[ -x /usr/bin/xfwm4_maintenance ] && /usr/bin/xfwm4_maintenance
