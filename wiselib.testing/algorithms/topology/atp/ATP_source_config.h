#define CONFIG_ATP_H_RANDOM_BOOT
//#define CONFIG_ATP_H_RANDOM_DB
#define CONFIG_ATP_H_FLEXIBLE_DB
#define CONFIG_ATP_H_FLEXIBLE_TP
#define CONFIG_ATP_H_MEMORYLESS_STATISTICS
#define CONFIG_ATP_H_DISABLE_SCL
#define CONFIG_ATP_H_LQI_FILTERING
#define CONFIG_ATP_H_RSSI_FILTERING

#define CONFIG_ATP_H_TRANSMISSION_CTRL
//#define CONFIG_ATP_H_THROUGHPUT_CTRL
//#define CONFING_ATP_H_STATUS_CONTROL
#ifdef CONFING_ATP_H_STATUS_CONTROL
	#define CONFIG_ATP_H_OSCILATION_CONTROL
	#ifdef CONFIG_ATP_H_OSCILATION_CONTROL
		#define CONFIG_ATP_H_OSCILATION_CONTROL_THRESHOLD_CONTROL
		//#define CONFIG_ATP_H_OSCILATION_CONTROL_LOCK_CONTROL
	#endif
#endif
#define CONFIG_ATP_H_SIMPLE_SCLD
//#define CONFIG_ATP_H_LOCAL_SCLD_MINS_MAXS
//#define CONFIG_ATP_H_LOCAL_BALANCED
//#define CONFIG_ATP_H_HYBRID
//#define CONFIG_ATP_H_HYBRID_PLUS
//#define CONFIG_ATP_H_AGENT_BENCHMARK
//#define CONFIG_ATP_H_DTPC_OPEN_LOOP
//#define CONFIG_ATP_H_DTPC_CLOSED_LOOP
//#define CONFIG_ATP_H_LMN_PLUS
//#define CONFIG_ATP_H_LINT


//#define DEBUG_ATP_H
#ifdef DEBUG_ATP_H
	//#define DEBUG_ATP_H_ENABLE
	//#define DEBUG_ATP_H_ATP_SERVICE
	//#define DEBUG_ATP_H_ATP_SERVICE_DISABLE
	//#define DEBUG_ATP_H_EVENTS_CALLBACK
	#define DEBUG_ATP_AGENT_H
#endif
#define DEBUG_ATP_H_STATS
	#ifdef DEBUG_ATP_H_STATS
	#define DEBUG_ATP_H_STATS_SHAWN
	//#define DEBUG_ATP_H_STATS_ISENSE
#endif
