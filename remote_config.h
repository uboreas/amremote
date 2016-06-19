#ifndef  _REMOTE_CONFIG_H
#define  _REMOTE_CONFIG_H

#include <sys/types.h>
#include <asm/ioctl.h>
#define   REMOTE_IOC_UNFCODE_CONFIG              _IOW('I',12,u_int32_t)
#define   REMOTE_IOC_INFCODE_CONFIG              _IOW('I',13,u_int32_t)
#define   REMOTE_IOC_RESET_KEY_MAPPING	    _IOW('I',3,u_int32_t)
#define   REMOTE_IOC_SET_KEY_MAPPING		    _IOW('I',4,u_int32_t)
#define   REMOTE_IOC_SET_MOUSE_MAPPING	    _IOW('I',5,u_int32_t)
#define   REMOTE_IOC_SET_REPEAT_DELAY		    _IOW('I',6,u_int32_t)
#define   REMOTE_IOC_SET_REPEAT_PERIOD	    _IOW('I',7,u_int32_t)

#define   REMOTE_IOC_SET_REPEAT_ENABLE		_IOW('I',8,u_int32_t)
#define	REMOTE_IOC_SET_DEBUG_ENABLE			_IOW('I',9,u_int32_t)
#define	REMOTE_IOC_SET_MODE					_IOW('I',10,u_int32_t)
#define	REMOTE_IOC_SET_MOUSE_SPEED			_IOW('I',11,u_int32_t)

#define	REMOTE_IOC_SET_REPEAT_KEY_MAPPING       _IOW('I',20,u_int32_t)
#define   REMOTE_IOC_SET_RELEASE_FDELAY		_IOW('I',97,u_int32_t)
#define   REMOTE_IOC_SET_RELEASE_SDELAY		_IOW('I',98,u_int32_t)
#define   REMOTE_IOC_SET_RELEASE_DELAY		_IOW('I',99,u_int32_t)
#define   REMOTE_IOC_SET_CUSTOMCODE   			_IOW('I',100,u_int32_t)
//reg
#define   REMOTE_IOC_SET_REG_BASE_GEN			_IOW('I',101,u_int32_t)
#define   REMOTE_IOC_SET_REG_CONTROL			_IOW('I',102,u_int32_t)
#define   REMOTE_IOC_SET_REG_LEADER_ACT 		_IOW('I',103,u_int32_t)
#define   REMOTE_IOC_SET_REG_LEADER_IDLE 		_IOW('I',104,u_int32_t)
#define   REMOTE_IOC_SET_REG_REPEAT_LEADER 	_IOW('I',105,u_int32_t)
#define   REMOTE_IOC_SET_REG_BIT0_TIME		 _IOW('I',106,u_int32_t)

//sw
#define   REMOTE_IOC_SET_BIT_COUNT			 	_IOW('I',107,u_int32_t)
#define   REMOTE_IOC_SET_TW_LEADER_ACT		_IOW('I',108,u_int32_t)
#define   REMOTE_IOC_SET_TW_BIT0_TIME			_IOW('I',109,u_int32_t)
#define   REMOTE_IOC_SET_TW_BIT1_TIME			_IOW('I',110,u_int32_t)
#define   REMOTE_IOC_SET_TW_REPEATE_LEADER	_IOW('I',111,u_int32_t)

#define   REMOTE_IOC_GET_TW_LEADER_ACT		_IOR_BAD('I',112,u_int32_t)
#define   REMOTE_IOC_GET_TW_BIT0_TIME			_IOR_BAD('I',113,u_int32_t)
#define   REMOTE_IOC_GET_TW_BIT1_TIME			_IOR_BAD('I',114,u_int32_t)
#define   REMOTE_IOC_GET_TW_REPEATE_LEADER	_IOR_BAD('I',115,u_int32_t)


#define   REMOTE_IOC_GET_REG_BASE_GEN			_IOR_BAD('I',121,u_int32_t)
#define   REMOTE_IOC_GET_REG_CONTROL			_IOR_BAD('I',122,u_int32_t)
#define   REMOTE_IOC_GET_REG_LEADER_ACT 		_IOR_BAD('I',123,u_int32_t)
#define   REMOTE_IOC_GET_REG_LEADER_IDLE 		_IOR_BAD('I',124,u_int32_t)
#define   REMOTE_IOC_GET_REG_REPEAT_LEADER 	_IOR_BAD('I',125,u_int32_t)
#define   REMOTE_IOC_GET_REG_BIT0_TIME		 	_IOR_BAD('I',126,u_int32_t)
#define   REMOTE_IOC_GET_REG_FRAME_DATA		_IOR_BAD('I',127,u_int32_t)
#define   REMOTE_IOC_GET_REG_FRAME_STATUS	_IOR_BAD('I',128,u_int32_t)

#define   REMOTE_IOC_SET_FN_KEY_SCANCODE     _IOW('I', 131, u_int32_t)
#define   REMOTE_IOC_SET_LEFT_KEY_SCANCODE   _IOW('I', 132, u_int32_t)
#define   REMOTE_IOC_SET_RIGHT_KEY_SCANCODE  _IOW('I', 133, u_int32_t)
#define   REMOTE_IOC_SET_UP_KEY_SCANCODE     _IOW('I', 134, u_int32_t)
#define   REMOTE_IOC_SET_DOWN_KEY_SCANCODE   _IOW('I', 135, u_int32_t)
#define   REMOTE_IOC_SET_OK_KEY_SCANCODE     _IOW('I', 136, u_int32_t)
#define   REMOTE_IOC_SET_PAGEUP_KEY_SCANCODE _IOW('I', 137, u_int32_t)
#define   REMOTE_IOC_SET_PAGEDOWN_KEY_SCANCODE _IOW('I', 138, u_int32_t)

#define   REMOTE_IOC_SET_TW_BIT2_TIME			_IOW('I',129,u_int32_t)
#define   REMOTE_IOC_SET_TW_BIT3_TIME			_IOW('I',130,u_int32_t)
#define   REMOTE_IOC_SET_FACTORY_CUSTOMCODE     _IOW('I',139,u_int32_t)
#define   ADC_KP_MAGIC 'P'
#define   KEY_IOC_SET_MOVE_MAP        		_IOW(ADC_KP_MAGIC,0X02,u_int32_t)
#define   KEY_IOC_SET_MOVE_ENABLE		  	_IOW(ADC_KP_MAGIC,0X03,u_int32_t)

#define ARRAY_SIZE(x) (sizeof(x) / sizeof((x)[0]))

typedef   struct{
      u_int32_t *key_map;
       u_int32_t *repeat_key_map;
       u_int32_t *mouse_map;
       u_int32_t *factory_customercode_map;
       u_int32_t repeat_delay;
       u_int32_t repeat_peroid;
       u_int32_t work_mode ;
       u_int32_t mouse_speed;
	u_int32_t repeat_enable;
	u_int32_t factory_infcode;
	u_int32_t factory_unfcode;
	u_int32_t factory_code;
	u_int32_t release_delay;
	u_int32_t release_fdelay;
	u_int32_t release_sdelay;
	u_int32_t debug_enable;
//sw
	u_int32_t 	bit_count;
	u_int32_t 	tw_leader_act;
	u_int32_t 	tw_bit0;
	u_int32_t   tw_bit1;
	u_int32_t   tw_bit2;
	u_int32_t   tw_bit3;
	u_int32_t 	tw_repeat_leader;
//reg
	u_int32_t  reg_base_gen;
	u_int32_t  reg_control;
	u_int32_t  reg_leader_act;
	u_int32_t  reg_leader_idle;
	u_int32_t  reg_repeat_leader;
	u_int32_t  reg_bit0_time;

	u_int32_t fn_key_scancode;
        u_int32_t left_key_scancode;
	u_int32_t right_key_scancode;
	u_int32_t up_key_scancode;
	u_int32_t down_key_scancode;
	u_int32_t ok_key_scancode;
	u_int32_t pageup_key_scancode;
	u_int32_t pagedown_key_scancode;
}remote_config_t;

//these string must in this order and sync with struct remote_config_t
static char*  config_item[33]={
    "repeat_delay",
    "repeat_peroid",
    "work_mode",
    "mouse_speed",
    "repeat_enable",
    "factory_infcode",
    "factory_unfcode",
    "factory_code",
    "release_delay",
    "release_fdelay",
    "release_sdelay",
    "debug_enable",
//sw
    "bit_count",
    "tw_leader_act",
    "tw_bit0",
    "tw_bit1",
    "tw_bit2",
    "tw_bit3",
    "tw_repeat_leader",
//reg
    "reg_base_gen",
    "reg_control",
    "reg_leader_act",
    "reg_leader_idle",
    "reg_repeat_leader",
    "reg_bit0_time",

    "fn_key_scancode",
    "left_key_scancode",
    "right_key_scancode",
    "up_key_scancode",
    "down_key_scancode",
    "ok_key_scancode",
    "pageup_key_scancode",
    "pagedown_key_scancode",
};

static u_int32_t remote_ioc_table[33]={
    REMOTE_IOC_SET_REPEAT_DELAY,
    REMOTE_IOC_SET_REPEAT_PERIOD,
    REMOTE_IOC_SET_MODE,
    REMOTE_IOC_SET_MOUSE_SPEED,
    
    REMOTE_IOC_SET_REPEAT_ENABLE,
    REMOTE_IOC_INFCODE_CONFIG,      
    REMOTE_IOC_UNFCODE_CONFIG,
    REMOTE_IOC_SET_CUSTOMCODE,
    REMOTE_IOC_SET_RELEASE_DELAY,
    REMOTE_IOC_SET_RELEASE_FDELAY,
    REMOTE_IOC_SET_RELEASE_SDELAY,
    REMOTE_IOC_SET_DEBUG_ENABLE,
//sw
    REMOTE_IOC_SET_BIT_COUNT,
    REMOTE_IOC_SET_TW_LEADER_ACT,
    REMOTE_IOC_SET_TW_BIT0_TIME,
    REMOTE_IOC_SET_TW_BIT1_TIME,
    REMOTE_IOC_SET_TW_BIT2_TIME,
    REMOTE_IOC_SET_TW_BIT3_TIME,
    REMOTE_IOC_SET_TW_REPEATE_LEADER,
//reg
    REMOTE_IOC_SET_REG_BASE_GEN,
    REMOTE_IOC_SET_REG_CONTROL	,
    REMOTE_IOC_SET_REG_LEADER_ACT,
    REMOTE_IOC_SET_REG_LEADER_IDLE,
    REMOTE_IOC_SET_REG_REPEAT_LEADER,
    REMOTE_IOC_SET_REG_BIT0_TIME,

    REMOTE_IOC_SET_FN_KEY_SCANCODE,
    REMOTE_IOC_SET_LEFT_KEY_SCANCODE,
    REMOTE_IOC_SET_RIGHT_KEY_SCANCODE,
    REMOTE_IOC_SET_UP_KEY_SCANCODE,
    REMOTE_IOC_SET_DOWN_KEY_SCANCODE,
    REMOTE_IOC_SET_OK_KEY_SCANCODE,
    REMOTE_IOC_SET_PAGEUP_KEY_SCANCODE,
    REMOTE_IOC_SET_PAGEDOWN_KEY_SCANCODE,
};

extern int set_config(remote_config_t *remote, int device_fd);
extern int get_config_from_file(FILE *fp, remote_config_t *remote);

#endif
