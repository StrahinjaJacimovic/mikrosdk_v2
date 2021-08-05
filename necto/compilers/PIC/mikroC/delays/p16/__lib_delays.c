void Mul_32x32_U();

unsigned long Get_Fosc_kHz(){

  return Clock_kHz();

}

void Delay_1us() {
  Delay_us(1);
}

void Delay_10us() {
  Delay_us(10);
}

void Delay_22us() {
  Delay_us(22);
}

void Delay_50us() {
  Delay_us(50);
}

void Delay_80us() {
  Delay_us(78);
}

void Delay_500us() {
  Delay_us(498);
}

void Delay_5500us() {
  Delay_us(5500);
}

void Delay_1ms() {
  Delay_ms(1);
}

void Delay_5ms() {
  Delay_ms(5);
}

void Delay_8ms() {
  Delay_ms(8);
}

void Delay_10ms() {
  Delay_ms(10);
}

void Delay_100ms() {
  Delay_ms(100);
}

void Delay_1sec() {
  Delay_ms(1000);
}

void boot16_Delay_5ms() org 0x1D6F{

   Delay_ms(5);

}

void Delay_Cyc(char cycles_div_by_10)  { // Cycles_div_by_10: min 3, max 255

  --cycles_div_by_10;
  --cycles_div_by_10;
  while (cycles_div_by_10 > 0) {
    --cycles_div_by_10;
    asm nop;
    asm nop;
    asm nop;
  }
  asm nop;
  asm nop;
  asm nop;
  asm nop;
  asm nop;
}

void VDelay_ms(unsigned Time_ms){
unsigned long NumberOfCyc;
  NumberOfCyc = Clock_kHz()>>2; // this will be done by compiler, no asm will be genereated except that for assignment;
  NumberOfCyc *= Time_ms;
  if (NumberOfCyc < 690)
    return;
  NumberOfCyc -= 690;
  NumberOfCyc =  NumberOfCyc >> 5; // Dec and While below take around 32 instructions
  while (NumberOfCyc--)
    {
      asm nop;
      asm nop;
      asm nop;
      asm nop;
      asm nop;
      asm nop;
      asm nop;
      asm nop;
    }
}


void VDelay_Advanced_ms(unsigned Time_ms, unsigned Current_Fosc_kHz){
unsigned long NumberOfCyc;
  NumberOfCyc = Current_Fosc_kHz >> 2;
  NumberOfCyc *= Time_ms;
  if (NumberOfCyc < 690)
    return;
  NumberOfCyc -= 690;
  NumberOfCyc =  NumberOfCyc >> 5; // Dec and While below take around 32 instructions
  while (NumberOfCyc--)
    {
      asm nop;
      asm nop;
      asm nop;
      asm nop;
      asm nop;
      asm nop;
      asm nop;
      asm nop;
    }
}