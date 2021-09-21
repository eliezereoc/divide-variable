uint8_t divideVariable(uint16_t num, bool turn_back){
    uint8_t first_byte = false, last_byte = false;
    first_byte = num & 0xff;
    last_byte = (num >> 8)  & 0xff; 
    if(!turn_back)
        return first_byte;
    else
        return last_byte;
}
    
uint16_t joinVariable(uint8_t first_byte, uint8_t last_byte){
    return (last_byte << 8) + first_byte;   
}



//Example of use

void main (void) {

    SystemInit();

    uint8_t var_fist_byte = 0x28;
    uint8_t var_last_byte = 0x2;
    uint16_t var_16bits = 0x21C;

    printf("Return first byte: " + divideVariable(var_16bits, false));
    printf("Return last byte: " + divideVariable(var_16bits, true));
    printf("Returns union of two 8-bit variables: " + joinVariable(var_fist_byte, var_last_byte));    

    while (true) {
        /* code */
    }     
    
}