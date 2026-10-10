
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_004b1da0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 auStack_250 [127];
  undefined1 uStack_51;
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [12];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [12];
  undefined1 auStack_28 [16];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  float fStack_8;
  uint uStack_4;
  
  iVar4 = FUN_00647ed0(param_3,&DAT_0072b9ac);
  if (iVar4 == 0) {
    bVar1 = *(byte *)(param_1 + 0x7f);
    *(byte *)(param_1 + 0x7f) = bVar1 | 1;
    if ((*(byte *)(param_1 + 0x16f) & 8) != 0) {
      *(byte *)(param_1 + 0x7f) = bVar1 & 0xfe;
    }
    FUN_00406a80();
    bVar1 = *(byte *)(param_1 + 0x7f);
    *param_2 = 3;
    uStack_4 = bVar1 & 1;
    FUN_00424770(auStack_250);
    return param_2;
  }
  iVar4 = FUN_00647e40(param_3,&DAT_0072bbd4);
  if (iVar4 == 0) {
    FUN_00406a80();
    uVar8 = 0x200;
    uVar5 = FUN_00434e80((int)*(short *)(param_1 + 0x16c));
    FUN_00647d70(auStack_250,uVar5,uVar8);
    *param_2 = 0xd;
    uStack_51 = 0;
    FUN_00424770(auStack_250);
    return param_2;
  }
  iVar4 = FUN_00647e40(param_3,s_Amount_0072bbcc);
  if (iVar4 == 0) {
    FUN_00406a80();
    uStack_c = (uint)*(short *)(param_1 + 0x16a);
  }
  else {
    iVar4 = FUN_00647e40(param_3,s_Rotates_Slowly_0072bc50);
    if (iVar4 == 0) {
      FUN_00406a80();
      bVar1 = *(byte *)(param_1 + 0x16e);
      *param_2 = 3;
      uStack_4 = bVar1 & 1;
      FUN_00424770(auStack_250);
      return param_2;
    }
    iVar4 = FUN_00647e40(param_3,s_Bobs_Slowly_0072bc44);
    if (iVar4 == 0) {
      FUN_00406a80();
      bVar1 = *(byte *)(param_1 + 0x16e);
      *param_2 = 3;
      uStack_4 = bVar1 >> 1 & 1;
      FUN_00424770(auStack_250);
      return param_2;
    }
    iVar4 = FUN_00647e40(param_3,s_Picked_Up_0072bc38);
    if (iVar4 == 0) {
      FUN_00406a80();
      bVar1 = *(byte *)(param_1 + 0x16e);
      *param_2 = 3;
      uStack_4 = (bVar1 & 4) >> 2;
      FUN_00424770(auStack_250);
      return param_2;
    }
    iVar4 = FUN_00647e40(param_3,s_Regenerates_0072bba4);
    if (iVar4 == 0) {
      FUN_00406a80();
      bVar1 = *(byte *)(param_1 + 0x16e);
      *param_2 = 3;
      uStack_4 = (bVar1 & 0x10) >> 4;
      FUN_00424770(auStack_250);
      return param_2;
    }
    iVar4 = FUN_00647e40(param_3,s_Glow_Off_Distance_0072bc10);
    if (iVar4 == 0) {
      FUN_00406a80();
      uStack_c = (uint)*(ushort *)(param_1 + 0x178);
      *param_2 = 1;
      FUN_00424770(auStack_250);
      return param_2;
    }
    iVar4 = FUN_00647e40(param_3,s_Glow_On_Distance_0072bbfc);
    if (iVar4 != 0) {
      iVar4 = FUN_00647e40(param_3,s_Does_Vacuum_0072bbf0);
      if (iVar4 == 0) {
        FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
        FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
        uVar2 = *(ushort *)(param_1 + 0x16e);
        *param_2 = 3;
        uStack_4 = (uVar2 & 0x200) >> 9;
        FUN_00424770(auStack_250);
        return param_2;
      }
      iVar4 = FUN_00647ed0(param_3,s_Regeneration_Time_0072bc24);
      if (iVar4 == 0) {
        FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
        FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
        sVar3 = *(short *)(param_1 + 0x174);
        *param_2 = 2;
        fStack_8 = (float)((int)sVar3 << 3) * _DAT_006e9350;
        puVar6 = auStack_250;
        puVar7 = param_2 + 2;
        for (iVar4 = 0x80; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        FUN_004357e0(auStack_50);
        FUN_004357e0(auStack_44);
        FUN_00425250(auStack_38);
        FUN_004357e0(auStack_34);
        FUN_004357e0(auStack_28);
        param_2[0x92] = uStack_10;
        param_2[0x90] = uStack_18;
        param_2[0x91] = uStack_14;
        param_2[0x95] = uStack_4;
        param_2[0x93] = uStack_c;
        param_2[0x94] = fStack_8;
        return param_2;
      }
      FUN_004c5ba0(param_2,param_3);
      return param_2;
    }
    FUN_00406a80();
    uStack_c = (uint)*(ushort *)(param_1 + 0x17a);
  }
  *param_2 = 1;
  FUN_00424770(auStack_250);
  return param_2;
}

