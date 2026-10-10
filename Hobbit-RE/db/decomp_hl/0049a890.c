
undefined4 * __thiscall FUN_0049a890(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 auStack_258 [2];
  undefined1 auStack_250 [511];
  undefined1 uStack_51;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_8;
  
  iVar1 = FUN_00647e40(param_3,&DAT_00729f78);
  if (iVar1 == 0) {
    FUN_00406a80();
    auStack_258[0] = 4;
    FUN_00647d70(auStack_250,param_1 + 0xc0,0x200);
    uStack_51 = 0;
    goto LAB_0049a9cb;
  }
  FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
  FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
  iVar1 = FUN_00647cf0(s_Rotation_007207f0);
  iVar2 = FUN_00647e80(param_3,s_Rotation_007207f0,iVar1);
  if (iVar2 == 0) {
    iVar2 = FUN_00647cf0(param_3);
    if (iVar1 == iVar2) {
      uStack_28 = *(undefined4 *)(param_1 + 0xa8);
      uStack_24 = *(undefined4 *)(param_1 + 0xac);
      uStack_20 = *(undefined4 *)(param_1 + 0xb0);
      auStack_258[0] = 0xb;
LAB_0049a9cb:
      *param_2 = auStack_258[0];
      FUN_00424770(auStack_250);
      return param_2;
    }
    iVar1 = iVar1 + param_3;
    iVar2 = FUN_004ad2b0(iVar1,auStack_258,s__Pitch_007207e8,(undefined4 *)(param_1 + 0xa8));
    if (iVar2 != 0) goto LAB_0049a9cb;
    iVar2 = FUN_004ad2b0(iVar1,auStack_258,&DAT_007207e0,param_1 + 0xac);
    if (iVar2 != 0) goto LAB_0049a9cb;
    iVar1 = FUN_004ad2b0(iVar1,auStack_258,s__Roll_007207d8,param_1 + 0xb0);
    if (iVar1 != 0) goto LAB_0049a9cb;
  }
  FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
  FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
  iVar1 = FUN_00647cf0(s_Scale_00725a04);
  iVar2 = FUN_00647e80(param_3,s_Scale_00725a04,iVar1);
  if (iVar2 == 0) {
    iVar2 = FUN_00647cf0(param_3);
    if (iVar1 == iVar2) {
      auStack_258[0] = 8;
      FUN_004357e0((undefined4 *)(param_1 + 0xb4));
    }
    else {
      iVar1 = iVar1 + param_3;
      iVar2 = FUN_00647e40(&DAT_00724e78,iVar1);
      if (iVar2 == 0) {
        uStack_8 = *(undefined4 *)(param_1 + 0xb4);
      }
      else {
        iVar2 = FUN_00647e40(&DAT_00724e74,iVar1);
        if (iVar2 == 0) {
          uStack_8 = *(undefined4 *)(param_1 + 0xb8);
        }
        else {
          iVar1 = FUN_00647e40(&DAT_00724e70,iVar1);
          if (iVar1 != 0) goto LAB_0049ab01;
          uStack_8 = *(undefined4 *)(param_1 + 0xbc);
        }
      }
      auStack_258[0] = 2;
    }
    *param_2 = auStack_258[0];
    FUN_00424770(auStack_250);
    return param_2;
  }
LAB_0049ab01:
  FUN_004abdf0(param_2,param_3);
  return param_2;
}

