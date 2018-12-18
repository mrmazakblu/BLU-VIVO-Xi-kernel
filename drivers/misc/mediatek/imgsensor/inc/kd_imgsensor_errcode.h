/*
 * Copyright (C) 2015 MediaTek Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#ifndef _KD_IMGSENSOR_ERRCODE_H_
#define _KD_IMGSENSOR_ERRCODE_H_

/* @ the same as camera_custom_errocode.h */
enum CUSTOM_CAMERA_ERROR_CODE_ENUM {
	ERROR_NONE = 0,
	ERROR_MSDK_IS_ACTIVED,
	ERROR_INVALID_DRIVER_MOD_ID,
	ERROR_INVALID_FEATURE_ID,
	ERROR_INVALID_SCENARIO_ID,
	ERROR_INVALID_CTRL_CODE,
	ERROR_VIDEO_ENCODER_BUSY,
	ERROR_INVALID_PARA,
	ERROR_OUT_OF_BUFFER_NUMBER,
	ERROR_INVALID_ISP_STATE,
	ERROR_INVALID_MSDK_STATE,
	ERROR_PHY_VIR_MEM_MAP_FAIL,
	ERROR_ENQUEUE_BUFFER_NOT_FOUND,
	ERROR_MSDK_BUFFER_ALREADY_INIT,
	ERROR_MSDK_BUFFER_OUT_OF_MEMORY,
	ERROR_SENSOR_POWER_ON_FAIL,
	ERROR_SENSOR_CONNECT_FAIL,
	ERROR_SENSOR_FEATURE_NOT_IMPLEMENT,
	ERROR_MSDK_IO_CONTROL_CODE,
	ERROR_MSDK_IO_CONTROL_MSG_QUEUE_OPEN_FAIL,
	ERROR_DRIVER_INIT_FAIL,
	ERROR_WRONG_NVRAM_CAMERA_VERSION,
	ERROR_NVRAM_CAMERA_FILE_FAIL,
	ERROR_IMAGE_DECODE_FAIL,
	ERROR_IMAGE_ENCODE_FAIL,
	ERROR_LED_FLASH_POWER_ON_FAIL,
	ERROR_MSDK_NOT_ALLOW_BY_MM_APP_MGR,
	ERROR_LENS_NOT_SUPPORT,
	ERROR_FLASH_LIGHT_NOT_SUPPORT,
	ERROR_FACE_DETECTION_NOT_SUPPORT,
	ERROR_PANORAMA_NOT_SUPPORT,
	ERROR_MAX
};


#endif
