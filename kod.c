#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <xdc/std.h>
#include "inc/tm4c123gh6pm.h"
#include <xdc/runtime/Log.h>

/* Board Header file */
#include "Board.h"
#include "MyLib/LCD_16x2_595_lib.h"

void init_lcd(){
    SysCtlClockSet(SYSCTL_SYSDIV_4|SYSCTL_USE_PLL|SYSCTL_XTAL_16MHZ|SYSCTL_OSC_MAIN);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOA);

    GPIOPinTypeGPIOOutput(GPIO_PORTA_BASE, GPIO_PIN_6);
    GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3);
    GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3, 0x00);

    LCD_16x2_595_init();
    LCD_595_Init();
    Lcd_595_Cmd(LCD_CURSOR_OFF);
    Lcd_595_text(1,1,"Starting...");
}

void init_port_D() {
    volatile unsigned long delay;
    SYSCTL_RCGC2_R |= SYSCTL_RCGC2_GPIOD;
    delay = SYSCTL_RCGC2_R;
    GPIO_PORTD_DIR_R |= 0x0F;
    GPIO_PORTD_AFSEL_R &= ~0x0F;
    GPIO_PORTD_DEN_R |= 0x0F;
}

void delay(unsigned long value){
    int i = 0;
    int j=0;
    for(i=0;i<value;i++)
    {
        for(j=0;j<value;j++);
    }
}

void yesilLedYak(){
    GPIO_PORTD_DATA_R |=  0b0001;//D0 portundaki ledi yak
    //Lcd_595_Cmd(SHIFT_ON);
    //Lcd_595_text(1,16,"kocaeli uni");
    delay(2000);
    //Lcd_595_text(2,16,"gulnihan berberoglu");
}

void maviLedYak(){
    GPIO_PORTD_DATA_R |=  0b0010;//D1 portundaki ledi yak
    //Lcd_595_Cmd(SHIFT_ON);
    //Lcd_595_text(1,16,"kocaeli uni");
    delay(2000);
    //Lcd_595_text(2,16,"gulnihan berberoglu");
}

void kirmiziLedYak(){
    GPIO_PORTD_DATA_R |=  0b0100;//D2 portundaki ledi yak
    //Lcd_595_Cmd(SHIFT_OFF);
    //Lcd_595_text(1,16,"kocaeli uni");
    delay(2000);
    //Lcd_595_text(2,16,"gulnihan berberoglu");
}

void beyazLedYak(){
    GPIO_PORTD_DATA_R |=  0b1000;//D3 portundaki ledi yak
    //Lcd_595_Cmd(SHIFT_OFF);
    //Lcd_595_text(2,16,"gulnihan berberoglu");
    delay(2000);
    //Lcd_595_text(1,16,"kocaeli uni");
}

void temizle(){
    delay(5000);
    GPIO_PORTD_DATA_R &= ~0b0001;//D0 portundaki ledi kapa
    GPIO_PORTD_DATA_R &= ~0b0010;//D1 portundaki ledi kapat
    GPIO_PORTD_DATA_R &= ~0b0100;//D2 portundaki ledi kapat
    GPIO_PORTD_DATA_R &= ~0b1000;//D3 portundaki ledi kapa
    //Lcd_595_Cmd(LCD_CLEAR);
}

void main()
{
    init_lcd();
    init_port_D();
    while (1) {
        temizle();
        srand(time(NULL));
        int rastgele=rand()%4 + 1;
        switch(rastgele){
        case 1:
            kirmiziLedYak();
            break;
        case 2:
            beyazLedYak();
            break;
        case 3:
            maviLedYak();
            break;
        case 4:
            yesilLedYak();
            break;
        }
    }
}
