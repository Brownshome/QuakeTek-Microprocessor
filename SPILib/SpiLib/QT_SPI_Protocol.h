#ifndef PL_H
#define PL_H

#define PL_COMMAND_SIZE 2
#define PL_COMMAND_PARAM_SIZE 1
#define PL_QUERY_SIZE PL_COMMAND_SIZE
#define PL_QUERY_PARAM_SIZE PL_COMMAND_PARAM_SIZE

#define PL_START_BYTE 0x4A
#define PL_START_BYTE_SIZE 1
#define PL_QUERY_LENGTH_SIZE 1
#define PL_QUERY_MAX_LENGTH 0xff

typedef enum
{
    //PL_COMMAND_DEPLOY,
    //PL_COMMAND_STOP_TASK,
    PL_COMMAND_POWER_OFF,
    PL_COMMAND_POWER_ON,
    PL_COMMAND_CALIBRATION_START,
    PL_COMMAND_CALIBRATION_STOP,
    PL_COMMAND_SAMPLING_START,
    PL_COMMAND_SAMPLING_STOP,
    PL_COMMAND_ENUM_COUNT,
} PL_Command_t;

typedef enum
{
    PL_QUERY_EVENT = PL_COMMAND_ENUM_COUNT,
    PL_QUERY_CONTACT_SWITCHES,
    PL_QUERY_PROBE_TEMPERATURE,
    PL_QUERY_PROBE_DIGIPOT,
    PL_QUERY_PROBE_DAC_MAX,
    PL_QUERY_PROBE_DAC_MIN,
	PL_QUERY_SAMPLING_DATA,
} PL_Query_t;

typedef enum
{
    PL_EVENT_DEPLOY_DONE,
    PL_EVENT_DEPLOY_FAILED,
    PL_EVENT_PROBE_POWERED,
    PL_EVENT_PROBE_UNPOWERED,
    PL_EVENT_CALIBRATION_DONE,
    PL_EVENT_SAMPLING_DONE,
    PL_EVENT_SAMPLING_DATA_AVAILABLE,
    PL_EVENT_TASK_INTERRUPTED
} PL_Event_t;


#endif /* PL_H */
