/* 
 * Dynamic sync control driver definitions (V2)
 * 
 * by andip71 (alias Lord Boeffla)
 * 
 */

#define DYN_FSYNC_ACTIVE_DEFAULT true
#define DYN_FSYNC_VERSION_MAJOR 2
#define DYN_FSYNC_VERSION_MINOR 1

extern bool suspend_active;
extern bool dyn_fsync_active;
int state_register_client(struct notifier_block *nb);
int state_unregister_client(struct notifier_block *nb);
int state_notifier_call_chain(unsigned long val, void *v);
