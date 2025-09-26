/*
   This file is meant to keep your settings after an upgrade of the multi source.
   If you know parameters you want for sure to be enabled or disabled in future
   then just force their values here.
   To enable  a setting use #define <setting name>
   To disable a setting use #undef  <setting name>
*/

// For example you can also define multiple module configurations, uncomment the one you want to compile for:

//Example on how to force the "Flash from TX" feature for all modules
#define CHECK_FOR_BOOTLOADER

#define STM32_BOARD

#undef ENABLE_PPM

#undef AETR
#define TAER

#undef INVERT_TELEMETRY_TX
#undef INVERT_TELEMETRY

#undef	BUGS_A7105_INO
#undef	FY326_NRF24L01_INO
#undef	GW008_NRF24L01_INO
#undef	HEIGHT_A7105_INO
#undef	HONTAI_NRF24L01_INO
#undef	POTENSIC_NRF24L01_INO
#undef	PROPEL_NRF24L01_INO
#undef	JJRC345_NRF24L01_INO
#undef	KN_NRF24L01_INO
#undef	LOLI_NRF24L01_INO
#undef	Q303_CCNRF_INO
#undef	Q90C_CCNRF_INO
#undef	REALACC_NRF24L01_INO
#undef	V911S_CCNRF_INO
#undef	XK_CCNRF_INO
#undef	XK2_CCNRF_INO
#undef	XERALL_NRF24L01_INO
#undef	YD717_NRF24L01_INO

#undef	JOYSWAY_A7105_INO
#undef	LOSI_CYRF6936_INO		//Need DSM to be enabled
#undef	TRAXXAS_CYRF6936_INO
#undef	EAZYRC_NRF24L01_INO
#undef	KYOSHO3_CYRF6936_INO
#undef	SHENQI_NRF24L01_INO
#undef	SHENQI2_NRF24L01_INO
#undef	JIABAILE_NRF24L01_INO
#undef	UDIRC_CCNRF_INO
#undef	KAMTOM_NRF24L01_INO
#undef	WL91X_CCNRF_INO
#undef	WPL_NRF24L01_INO
//Save flash space...
#undef	CABELL_NRF24L01_INO
