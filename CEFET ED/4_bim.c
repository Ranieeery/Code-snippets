/*
 * File:   4_bim.c
 * Author: Nelson
 *
 */

// inclusão de bibliotecas - #include
#include <xc.h>


//Configuração de Bits POR - #pragma

#pragma config CPUDIV = OSC1_PLL2   // PLL Desligado
#pragma config FOSC = HS            // Fosc = 20MHz
#pragma config WDT = OFF            // Watchdog desativado
#pragma config PBADEN = OFF         // Pinos do PORTB começam como digitais
#pragma config LVP = OFF            // Desabilita gravaçao em baixa tensão
#pragma config MCLRE = OFF           // MCLR habilitado - RE3 desabilitado
#pragma config PWRT = ON            // Power-up timer enable bit

// definições de hardwrare #define
#define _XTAL_FREQ 4000000
#define bt1 PORTEbits.RE3
#define LED1 PORTDbits.RD0
#define LED2 PORTDbits.RD1
#define LED3 PORTDbits.RD2
#define LED4 PORTDbits.RD3
#define LED5 PORTDbits.RD4
#define LED6 PORTDbits.RD5
#define LED7 PORTDbits.RD6
#define LED8 PORTDbits.RD7
#define Leds PORTD
#define CH1 PORTBbits.RB0
#define CH2 PORTBbits.RB1
#define CH3 PORTBbits.RB2
#define CH4 PORTBbits.RB3
#define CH5 PORTBbits.RB4
#define CH6 PORTBbits.RB5          
#define CH7 PORTBbits.RB6
#define CH8 PORTBbits.RB7
#define Chaves PORTB

// funções secundárias


// função principal
void main(void) {

// Declarações de Variáveis
    int x = 1;
// Inicialização dos portais 


// Configurações de periféricos
    //EnablePullups();            // habilita os pull-ups do PORTB
    INTCON2bits.RBPU = 1;
  
    TRISB = 0xFF;
    TRISD = 0x00;
    
    LED1=1;
    LED2=1;
    
    for(;;){
    
        LED1=0;
        __delay_ms(3000) ;
        LED1=1;
        __delay_ms(3000) ;
        
     x = x+1;
    
    if(x==4) LED2 = 0;
       
    }  
}
