
#ifndef __USER_CONFIG_H__
#define __USER_CONFIG_H__

#define MCU_VERSION	"WiFiMCU 0.9.6"
#define PRT_VERSION "Ver. 0.9.6"
#define BUILD_DATE	"build 20151012"

#define USE_GPIO_MODULE
#define USE_ADC_MODULE
#define USE_MCU_MODULE
#define USE_WIFI_MODULE
#define USE_FILE_MODULE
#define USE_I2C_MODULE
#define USE_NET_MODULE
#define USE_PWM_MODULE
#define USE_SPI_MODULE
#define USE_TMR_MODULE
#define USE_UART_MODULE
#define USE_BIT_MODULE
#define USE_SENSOR_MODULE
#define USE_OLED_MODULE

#define MOD_REG_NUMBER( L, name, val )\
  lua_pushnumber( L, val );\
  lua_setfield( L, -2, name )
    
#define MOD_REG_LUDATA( L, name, val )\
  lua_pushlightuserdata( L, val );\
  lua_setfield( L, -2, name )
    
#define MOD_CHECK_ID( mod, id )\
  if( !platform_ ## mod ## _exists( id ) )\
    return luaL_error( L, #mod" %d does not exist", ( unsigned )id )

//v0.9.6 
//Solve system corrupt bug when reading file in callback function
//Print version infomation when startup
      
//v0.9.5@2015-9-5
//Release Integer and Float version
//Enable LTR function to save ram(48k free)
//Update logo
//Change exlibs, delete usb folder
//Repair package module bug
//Add tmr.delayus()
//Add sensor/bit module
//Add i2c module
//Add spi module
//Add mqtt(not work yet)

//v0.9.4@2015-8-24
//repair wifi module bugs
//v0.9.3@2015-8-18
//change the bootloader ymodem.c
//v0.9.2@2015-8-10
//add uart/pwm/adc modules change
//change net module
//change the logo
//v0.9.1@2015-7-26
//initial publish

#endif	/* __USER_CONFIG_H__ */
