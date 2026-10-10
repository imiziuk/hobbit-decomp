
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0065c8d0(undefined4 param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int *piStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if ((DAT_0074e234 != 0) && (DAT_007edaf8 != 0)) {
    local_c = param_5;
    local_4 = param_5 + 0xc;
    local_8 = param_2 * 7 + param_4;
    local_10 = param_4;
    uStack_20 = 0x65c920;
    FUN_0064cc00();
    uStack_20 = param_3;
    uStack_24 = 0x8528;
    piStack_28 = &local_10;
    (**(code **)(*DAT_007edae0 + 0x18))(DAT_007edae0,param_1,param_2);
    iVar1 = (**(code **)(*DAT_007edae0 + 0x18))
                      (DAT_007edae0,param_1,param_2,&piStack_28,0x8128,param_3);
    iVar2 = iVar1;
    if (iVar1 < 0) {
      iVar2 = -iVar1;
    }
    if ((iVar1 != 0) && (_DAT_007f0314 = iVar2, iVar1 < 0)) {
      _DAT_007f0314 = -iVar2;
    }
    FUN_0064cc50();
  }
  return;
}

