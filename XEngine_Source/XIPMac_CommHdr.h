#pragma once
/********************************************************************
//    Created:     2024/07/01  15:39:46
//    File Name:   D:\IPMacData\XEngine_Source\XIPMac_CommHdr.h
//    File Path:   D:\IPMacData\XEngine_Source
//    File Base:   XIPMac_CommHdr
//    File Ext:    h
//    Project:     XEngine(����ͨ������)
//    Author:      qyt
//    Purpose:     ����ͷ�ļ�
//    History:
*********************************************************************/
//////////////////////////////////////////////////////////////////////////
//                          ��Э�鶨��;unOperatorType
//////////////////////////////////////////////////////////////////////////
typedef enum
{
	//�û���Ϣ
	ENUM_XENGINE_COMMUNICATION_PROTOCOL_TYPE_IPMAC = ENUM_XENGINE_COMMUNICATION_PROTOCOL_TYPE_USER + 101
}ENUM_XENGINE_COMMUNICATION_PROTOCOL_TYPE_CUSTOM;
//////////////////////////////////////////////////////////////////////////
//                          ��Э�鶨��:unOperatorCode
//////////////////////////////////////////////////////////////////////////
//MAC
#define XENGINE_COMMUNICATION_PROTOCOL_OPERATOR_CODE_MAC 0x10101     