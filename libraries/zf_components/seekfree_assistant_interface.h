/*********************************************************************************************************************
* RT1064DVL6A Opensourec Library 即（RT1064DVL6A 开源库）是一个基于官方 SDK 接口的第三方开源库
* Copyright (c) 2022 SEEKFREE 逐飞科技
* 
* 本文件是 RT1064DVL6A 开源库的一部分
* 
* RT1064DVL6A 开源库 是免费软件
* 您可以根据自由软件基金会发布的 GPL（GNU General Public License，即 GNU通用公共许可证）的条款
* 即 GPL 的第3版（即 GPL3.0）或（您选择的）任何后来的版本，重新发布和/或修改它
* 
* 本开源库的发布是希望它能发挥作用，但并未对其作任何的保证
* 甚至没有隐含的适销性或适合特定用途的保证
* 更多细节请参见 GPL
* 
* 您应该在收到本开源库的同时收到一份 GPL 的副本
* 如果没有，请参阅<https://www.gnu.org/licenses/>
* 
* 额外注明：
* 本开源库使用 GPL3.0 开源许可证协议 以上许可申明为译文版本
* 许可申明英文版在 libraries/doc 文件夹下的 GPL3_permission_statement.txt 文件中
* 许可证副本在 libraries 文件夹下 即该文件夹下的 LICENSE 文件
* 欢迎各位使用并传播本程序 但修改内容时必须保留逐飞科技的版权声明（即本声明）
* 
* 文件名称          seekfree_assistant_interface
* 公司名称          成都逐飞科技有限公司
* 版本信息          查看 libraries/doc 文件夹内 version 文件 版本说明
* 开发环境          IAR 8.32.4 or MDK 5.33
* 适用平台          RT1064DVL6A
* 店铺链接          https://seekfree.taobao.com/
* 
* 修改记录
* 日期             作者             备注
* 2024-1-11        SeekFree         first version
********************************************************************************************************************/

#ifndef _seekfree_assistant_interface_h_
#define _seekfree_assistant_interface_h_



// 数据发送设备枚举
typedef enum
{
    SEEKFREE_ASSISTANT_DEBUG_UART,      // 调试串口    使用的串口由DEBUG_UART_INDEX宏定义指定
    SEEKFREE_ASSISTANT_WIRELESS_UART,   // 无线转串口
    SEEKFREE_ASSISTANT_CH9141,          // CH9141蓝牙
    SEEKFREE_ASSISTANT_WIFI_UART,       // WIFI转串口
    SEEKFREE_ASSISTANT_WIFI_SPI,        // 高速WIFI SPI
    SEEKFREE_ASSISTANT_BLE6A20,        // 高速WIFI SPI
    SEEKFREE_ASSISTANT_CUSTOM,          // 自定义通讯方式 需要自行seekfree_assistant_transfer与seekfree_assistant_receive函数
}seekfree_assistant_transfer_device_enum;


void seekfree_assistant_interface_init(uint32 (*send_func) (const uint8 *, uint32 ), uint32 (*recv_func)  (uint8 *, uint32 ));

#endif
