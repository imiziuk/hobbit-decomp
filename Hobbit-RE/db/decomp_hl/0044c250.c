
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0044c250(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (*(int *)(param_1 + 0x760) == 0) {
    FUN_0043a3f0(6,s__C__projects_meridian_Support_Ob_00724833 + 1,0x3b);
    return;
  }
  if ((*(byte *)(param_1 + 0xb1) & 4) == 0) {
    fVar1 = *(float *)(param_1 + 0x920) + *(float *)(param_1 + 0x5e9c);
    *(float *)(param_1 + 0x5e9c) = fVar1;
    if (_DAT_00724830 < fVar1) {
      FUN_0043a3f0(1,s__C__projects_meridian_Support_Ob_00724833 + 1,0x44);
      return;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x5e9c) = 0;
    FUN_00549470(param_1 + 0x454);
    FUN_00549580(param_1 + 0x454);
    uVar5 = 0x3e000000;
    uVar4 = 1;
    uVar3 = 0;
    uVar2 = FUN_0053cc70(s_SLIDE_FLAT_007205dc);
    FUN_00540840(uVar2,uVar3,uVar4,uVar5);
    *(undefined4 *)(param_1 + 0x7a8) = 0;
    *(undefined4 *)(param_1 + 0x7a4) = 0;
    *(undefined4 *)(param_1 + 0x7a0) = 0;
    *(undefined4 *)(param_1 + 0x794) = 0x3f800000;
    FUN_0044c120(0x11,0x3f800000);
  }
  return;
}

