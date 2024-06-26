//
// Created by RUPC on 2024/1/8.
//

#ifndef HARDWARE_DP32G030_TIMER_H
#define HARDWARE_DP32G030_TIMER_H
#include <stdint.h>

#define TIMERBASE0_ADD 0x40064000
//TIMER0
#define TIMERBASE0_EN_ADD (0X00+TIMERBASE0_ADD)
#define TIMERBASE0_DIV_ADD (0X04+TIMERBASE0_ADD)
#define TIMERBASE0_IE_ADD (0X10+TIMERBASE0_ADD)
#define TIMERBASE0_IF_ADD (0X14+TIMERBASE0_ADD)
#define TIMERBASE0_HIGH_LOAD_ADD (0X20+TIMERBASE0_ADD)
#define TIMERBASE0_HIGH_CNT_ADD (0X24+TIMERBASE0_ADD)
#define TIMERBASE0_LOW_LOAD_ADD (0X30+TIMERBASE0_ADD)
#define TIMERBASE0_LOW_CNT_ADD (0X34+TIMERBASE0_ADD)

#define TIMERBASE0_EN (*(volatile uint32_t *)TIMERBASE0_EN_ADD)
#define TIMERBASE0_DIV (*(volatile uint32_t *)TIMERBASE0_DIV_ADD)
#define TIMERBASE0_IE (*(volatile uint32_t *)TIMERBASE0_IE_ADD)
#define TIMERBASE0_IF (*(volatile uint32_t *)TIMERBASE0_IF_ADD)
#define TIMERBASE0_HIGH_LOAD (*(volatile uint32_t *)TIMERBASE0_HIGH_LOAD_ADD)
#define TIMERBASE0_HIGH_CNT (*(volatile uint32_t *)TIMERBASE0_HIGH_CNT_ADD)
#define TIMERBASE0_LOW_LOAD (*(volatile uint32_t *)TIMERBASE0_LOW_LOAD_ADD)
#define TIMERBASE0_LOW_CNT (*(volatile uint32_t *)TIMERBASE0_LOW_CNT_ADD)




extern uint32_t TIM0_CNT;

void TIM0_INIT();

#endif //UV_K5_FIRMWARE_CUSTOM_0_17_TIMER_H
