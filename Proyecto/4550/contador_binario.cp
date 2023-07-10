#line 1 "C:/Users/Christian/Documents/MikroC-X-TRAINER-main/Practica 4 - MikroC/Proyecto/4550/contador_binario.c"
#pragma orgall 0x1FFF
#line 23 "C:/Users/Christian/Documents/MikroC-X-TRAINER-main/Practica 4 - MikroC/Proyecto/4550/contador_binario.c"
int cont = 0;

void main() org 0x2000
{
 TRISA2_bit = 1;
 TRISB = 0x00;
 PORTB = 0X00;

 while(1){
 if ( PORTA.f2 ==0) {
 cont++;
 PORTB = cont;
 Delay_ms(5);
 while ( PORTA.f2 ==0);
 Delay_ms(5);
 }
 }

}
