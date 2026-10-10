
undefined4 * __thiscall FUN_0048a2a0(int param_1,undefined4 *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_258;
  undefined1 auStack_250 [511];
  undefined1 uStack_51;
  undefined4 uStack_18;
  undefined4 uStack_14;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  iVar2 = FUN_00647e40(param_3,s_FX_Resource_00729380);
  if (iVar2 == 0) {
    FUN_00425440();
    uStack_258 = 0xd;
    FUN_00647d70(auStack_250,param_1 + 0xa8,0x200);
    uStack_51 = 0;
    goto LAB_0048a566;
  }
  FUN_00406a80();
  iVar2 = FUN_00647cf0(s_FX_Scale_00729374);
  iVar3 = FUN_00647e80(param_3,s_FX_Scale_00729374,iVar2);
  if (iVar3 == 0) {
    iVar3 = FUN_00647cf0(param_3);
    if (iVar2 == iVar3) {
      uStack_258 = 8;
      FUN_004357e0((undefined4 *)(param_1 + 0x128));
      goto LAB_0048a3b7;
    }
    iVar2 = iVar2 + param_3;
    iVar3 = FUN_00647e40(&DAT_00724e78,iVar2);
    if (iVar3 == 0) {
      uStack_8 = *(undefined4 *)(param_1 + 0x128);
    }
    else {
      iVar3 = FUN_00647e40(&DAT_00724e74,iVar2);
      if (iVar3 == 0) {
        uStack_8 = *(undefined4 *)(param_1 + 300);
      }
      else {
        iVar2 = FUN_00647e40(&DAT_00724e70,iVar2);
        if (iVar2 != 0) goto LAB_0048a3e0;
        uStack_8 = *(undefined4 *)(param_1 + 0x130);
      }
    }
    uStack_258 = 2;
LAB_0048a3b7:
    *param_2 = uStack_258;
    FUN_00424770(auStack_250);
    return param_2;
  }
LAB_0048a3e0:
  iVar2 = FUN_00647e40(param_3,s_FX_Playback_Rate_00729360);
  if (iVar2 == 0) {
    FUN_00425440();
    uStack_8 = *(undefined4 *)(param_1 + 0x150);
    *param_2 = 2;
    FUN_00424770(auStack_250);
    return param_2;
  }
  iVar2 = FUN_00647e40(param_3,s_FX_Start_On_Init_0072934c);
  if (iVar2 == 0) {
    FUN_00425440();
    bVar1 = *(byte *)(param_1 + 0x154);
    *param_2 = 3;
    uStack_4 = bVar1 & 1;
    FUN_00424770(auStack_250);
    return param_2;
  }
  FUN_00425440();
  iVar2 = FUN_00647cf0(s_FX_Color_00729340);
  iVar3 = FUN_00647e80(param_3,s_FX_Color_00729340,iVar2);
  if (iVar3 != 0) {
LAB_0048a58f:
    iVar2 = FUN_00647e40(param_3,s_Host_Object_00729334);
    if (iVar2 == 0) {
      FUN_00425440();
      uStack_14 = *(undefined4 *)(param_1 + 0x15c);
      uStack_18 = *(undefined4 *)(param_1 + 0x158);
      *param_2 = 0xf;
      FUN_00424770(auStack_250);
      return param_2;
    }
    iVar2 = FUN_00647e40(param_3,s_Host_Part_Name_00729324);
    if (iVar2 == 0) {
      FUN_00425440();
      FUN_00647d70(auStack_250,*(undefined4 *)(param_1 + 0x17c),0x200);
      uStack_51 = 0;
      *param_2 = 0xd;
      FUN_00424770(auStack_250);
      return param_2;
    }
    FUN_004abdf0(param_2,param_3);
    return param_2;
  }
  iVar3 = FUN_00647cf0(param_3);
  if (iVar2 == iVar3) {
    uStack_258 = 0x11;
    FUN_00425250((byte *)(param_1 + 0x134));
    goto LAB_0048a566;
  }
  iVar2 = iVar2 + param_3;
  iVar3 = FUN_00647e40(&DAT_00728244,iVar2);
  if (iVar3 == 0) {
    bVar1 = *(byte *)(param_1 + 0x136);
LAB_0048a557:
    uStack_c = (uint)bVar1;
  }
  else {
    iVar3 = FUN_00647e40(&DAT_00728240,iVar2);
    if (iVar3 == 0) {
      uStack_c = (uint)*(byte *)(param_1 + 0x135);
    }
    else {
      iVar3 = FUN_00647e40(&DAT_0072823c,iVar2);
      if (iVar3 != 0) {
        iVar2 = FUN_00647e40(&DAT_00728238,iVar2);
        if (iVar2 != 0) goto LAB_0048a58f;
        bVar1 = *(byte *)(param_1 + 0x137);
        goto LAB_0048a557;
      }
      uStack_c = (uint)*(byte *)(param_1 + 0x134);
    }
  }
  uStack_258 = 1;
LAB_0048a566:
  *param_2 = uStack_258;
  FUN_00424770(auStack_250);
  return param_2;
}

