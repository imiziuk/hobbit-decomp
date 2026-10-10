
void FUN_00499e60(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  if ((DAT_0075d338 == 0) || ((param_3 & 0x20) != 0)) {
    iVar1 = FUN_00425010();
    *(undefined4 *)(iVar1 + 0x80) = 1;
    FUN_00647d10(iVar1,param_2);
    *(uint *)(iVar1 + 0x84) = param_3;
    *(undefined4 *)(iVar1 + 0xf0) = param_4;
    *(undefined4 *)(iVar1 + 0xf4) = param_5;
  }
  return;
}

