
void FUN_00538050(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  int iVar1;
  
  if ((DAT_0075d338 == 0) || ((param_4 & 0x20) != 0)) {
    iVar1 = FUN_00425010();
    *(undefined4 *)(iVar1 + 0x80) = 0xd;
    FUN_00647d10(iVar1,param_2);
    *(uint *)(iVar1 + 0x84) = param_4;
    *(undefined4 *)(iVar1 + 0xf0) = 0;
    *(undefined4 *)(iVar1 + 0xf4) = *(undefined4 *)(param_3 + 8);
    *(int *)(iVar1 + 0x100) = param_3;
  }
  return;
}

