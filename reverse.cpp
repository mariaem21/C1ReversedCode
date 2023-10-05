

int reverse(int input){
    int uVar1;
    
    uVar1 = input * 2 & 0xaaaaaaaa | input >> 1 & 0x55555555;
    uVar1 = (uVar1 & 0x33333333) << 2 | uVar1 >> 2 & 0x33333333;
    uVar1 = (uVar1 & 0xf0f0f0f) << 4 | uVar1 >> 4 & 0xf0f0f0f;
    uVar1 = (uVar1 & 0xff00ff) << 8 | uVar1 >> 8 & 0xff00ff;
    return uVar1 << 0x10 | uVar1 >> 0x10;
}