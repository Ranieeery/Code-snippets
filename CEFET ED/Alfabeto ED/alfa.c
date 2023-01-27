/*
 * File:   codigo_teste.c
 * Author: Raniery
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
#define C1 PORTBbits.RB3
#define C2 PORTBbits.RB4
#define C3 PORTBbits.RB5
#define C4 PORTBbits.RB6
#define C5 PORTBbits.RB7
#define Linhas PORTD


// funções secundárias
#include "biblio.h"

// função principal
void main(void) {

// Declarações de Variáveis

    
// Inicialização dos portais


// Configurações de periféricos
    //EnablePullups();            // habilita os pull-ups do PORTB
    INTCON2bits.RBPU = 1;
  
    TRISB = 0x00;
    TRISD = 0x00;
    
    PORTB = 0XFF;

    for(;;){
         for(int i=0;i<30;i++)
             tp_a ();
         for(int i=0;i<30;i++)
             tp_b ();
         for(int i=0;i<30;i++)
             tp_c ();  
         for(int i=0;i<30;i++)
             tp_d ();
         for(int i=0;i<30;i++)
             tp_e ();
         for(int i=0;i<30;i++)
             tp_f ();
         for(int i=0;i<30;i++)
             tp_g ();
         for(int i=0;i<30;i++)
             tp_h ();
         for(int i=0;i<30;i++)
             tp_i ();
         for(int i=0;i<30;i++)
             tp_j ();
         for(int i=0;i<30;i++)
             tp_k ();
         for(int i=0;i<30;i++)
             tp_l ();
         for(int i=0;i<30;i++)
             tp_m ();
         for(int i=0;i<30;i++)
             tp_n ();
         for(int i=0;i<30;i++)
             tp_o ();
         for(int i=0;i<30;i++)
             tp_p ();
         for(int i=0;i<30;i++)
             tp_q ();
         for(int i=0;i<30;i++)
             tp_r ();
         for(int i=0;i<30;i++)
             tp_s ();
         for(int i=0;i<30;i++)
             tp_t ();
         for(int i=0;i<30;i++)
             tp_u ();
         for(int i=0;i<30;i++)
             tp_v ();
         for(int i=0;i<30;i++)
             tp_w ();
         for(int i=0;i<30;i++)
             tp_x ();
         for(int i=0;i<30;i++)
             tp_y ();
         for(int i=0;i<30;i++)
             tp_z ();
         for(int i=0;i<30;i++)
             tp_A ();
         for(int i=0;i<30;i++)
             tp_B ();
         for(int i=0;i<30;i++)
             tp_C ();  
         for(int i=0;i<30;i++)
             tp_D ();
         for(int i=0;i<30;i++)
             tp_E ();
         for(int i=0;i<30;i++)
             tp_F ();
         for(int i=0;i<30;i++)
             tp_G ();
         for(int i=0;i<30;i++)
             tp_H ();
         for(int i=0;i<30;i++)
             tp_I ();
         for(int i=0;i<30;i++)
             tp_J ();
         for(int i=0;i<30;i++)
             tp_K ();
         for(int i=0;i<30;i++)
             tp_L ();
         for(int i=0;i<30;i++)
             tp_M ();
         for(int i=0;i<30;i++)
             tp_N ();
         for(int i=0;i<30;i++)
             tp_O ();
         for(int i=0;i<30;i++)
             tp_P ();
         for(int i=0;i<30;i++)
             tp_Q ();
         for(int i=0;i<30;i++)
             tp_R ();
         for(int i=0;i<30;i++)
             tp_S ();
         for(int i=0;i<30;i++)
             tp_T ();
         for(int i=0;i<30;i++)
             tp_U ();
         for(int i=0;i<30;i++)
             tp_V ();
         for(int i=0;i<30;i++)
             tp_W ();
         for(int i=0;i<30;i++)
             tp_X ();
         for(int i=0;i<30;i++)
             tp_Y ();
         for(int i=0;i<30;i++)
             tp_Z ();
         for(int i=0;i<30;i++)
             tp_0 ();
         for(int i=0;i<30;i++)
             tp_1 ();
         for(int i=0;i<30;i++)
             tp_2 ();
         for(int i=0;i<30;i++)
             tp_3 ();
         for(int i=0;i<30;i++)
             tp_4 ();
         for(int i=0;i<30;i++)
             tp_5 ();
         for(int i=0;i<30;i++)
             tp_6 ();
         for(int i=0;i<30;i++)
             tp_7 ();
         for(int i=0;i<30;i++)
             tp_8 ();
         for(int i=0;i<30;i++)
             tp_9 ();
         for(int i=0;i<30;i++)
             tp_aa ();
         for(int i=0;i<30;i++)
             tp_ii ();
         for(int i=0;i<30;i++)
             tp_uu ();
         for(int i=0;i<30;i++)
             tp_ee ();
         for(int i=0;i<30;i++)
             tp_oo ();
         for(int i=0;i<30;i++)
             tp_ka ();
         for(int i=0;i<30;i++)
             tp_ki ();
         for(int i=0;i<30;i++)
             tp_ku ();
         for(int i=0;i<30;i++)
             tp_ke ();
         for(int i=0;i<30;i++)
             tp_ko ();
         
         }
        
}