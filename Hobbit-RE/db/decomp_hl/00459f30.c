
void FUN_00459f30(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5,
                 int param_6)

{
  int iVar1;
  
  if ((DAT_0075d338 == 0) || ((param_5 & 0x20) != 0)) {
    iVar1 = FUN_00425010();
    *(undefined4 *)(iVar1 + 0x80) = 0xf;
    FUN_00647d10(iVar1,param_2);
    *(uint *)(iVar1 + 0x84) = param_5;
    *(undefined4 *)(iVar1 + 0x100) = param_3;
    if (param_4 == 0) {
      *(undefined4 *)(iVar1 + 0x104) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x104) = 1;
    }
    if (param_6 != 0) {
      *(uint *)(iVar1 + 0x104) = *(uint *)(iVar1 + 0x104) | 2;
    }
  }
  return;
}

