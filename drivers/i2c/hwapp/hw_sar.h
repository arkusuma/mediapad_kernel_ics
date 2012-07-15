/***********************************************************************
  ��Ȩ��Ϣ: ��Ȩ����(C) 1988-2010, ��Ϊ�������޹�˾.
  �ļ���: 
  ����: 
  �汾: 
  ��������: 2010-02-10
  �������: 
  ��������: 
      ����GPSģ���õ��Ĺ������������ͣ� ���õĹ���ͷ�ļ���
  ��Ҫ�����б�: 
     
  �޸���ʷ��¼�б�: 
    <��  ��>    <�޸�ʱ��>  <�汾>  <�޸�����>
  ��ע: 
===========================================================================*/
#ifndef _HW_SAR_H

/*************************ͷ�ļ�����*******************************/
/*************************�궨��*************************************/
#define _HW_SAR_H

/* ����ֵ: �ɹ� */
#define SAR_OK  0
/* ����ֵ: ʧ�� */
#define SAR_ERROR -1


/* ��ӡ���� */
enum 
{
    enSarPrintLevelErr = 0,
    enSarPrintLevelInfo,
    enSarPrintLevelDebug 
};

/*************************�ṹ�嶨��*******************************/
typedef char INT8;
typedef short INT16;
typedef int INT32;
typedef unsigned char UINT8;
typedef unsigned short UINT16;
typedef unsigned int UINT32;
typedef char * STRING;
typedef long LONG;
typedef unsigned long ULONG;

/* AD715X �Ĵ���starts */
#define SAR_AD715X_REG_STATUS              0
#define SAR_AD715X_REG_CH1_DATA_HIGH       1
#define SAR_AD715X_REG_CH1_DATA_LOW        2
#define SAR_AD715X_REG_CH2_DATA_HIGH       3
#define SAR_AD715X_REG_CH2_DATA_LOW        4
#define SAR_AD715X_REG_CH1_AVG_HIGH        5
#define SAR_AD715X_REG_CH1_AVG_LOW         6
#define SAR_AD715X_REG_CH2_AVG_HIGH        7
#define SAR_AD715X_REG_CH2_AVG_LOW         8
#define SAR_AD715X_REG_CH1_SENSITIVITY     9
#define SAR_AD715X_REG_CH1_THR_HOLD_H      9
#define SAR_AD715X_REG_CH1_TIMEOUT         10
#define SAR_AD715X_REG_CH1_THR_HOLD_L      10
#define SAR_AD715X_REG_CH1_SETUP           11
#define SAR_AD715X_REG_CH2_SENSITIVITY     12
#define SAR_AD715X_REG_CH2_THR_HOLD_H      12
#define SAR_AD715X_REG_CH2_TIMEOUT         13
#define SAR_AD715X_REG_CH2_THR_HOLD_L      13
#define SAR_AD715X_REG_CH2_SETUP           14
#define SAR_AD715X_REG_CFG                 15
#define SAR_AD715X_REG_PD_TIMER            16
#define SAR_AD715X_REG_CH1_CAPDAC          17
#define SAR_AD715X_REG_CH2_CAPDAC          18
#define SAR_AD715X_REG_SN3                 19
#define SAR_AD715X_REG_SN2                 20
#define SAR_AD715X_REG_SN1                 21
#define SAR_AD715X_REG_SN0                 22
#define SAR_AD715X_REG_ID                  23
/* AD715X �Ĵ���ends */
/* ad7156 �Ĵ������� */
#define SAR_AD715X_REG_NUM 24
/*************************�ⲿ��������****************************/
extern INT32 sar_printk(UINT8 ucSarPrintLevel, STRING szFmt, ...);
/*************************�ⲿȫ�ֱ���****************************/

#endif /* _HW_SAR_H */
/*************************�ļ�����**********************************/
