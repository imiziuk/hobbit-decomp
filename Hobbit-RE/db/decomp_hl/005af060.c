
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_005af060(int param_1,undefined4 param_2)

{
  int iVar1;
  float10 fVar2;
  undefined8 uVar3;
  
  if (*(float *)(param_1 + 0x204) < _DAT_006e936c) goto LAB_005af0de;
  uVar3 = FUN_005af0f0(param_2);
  FUN_005af120(uVar3);
  iVar1 = FUN_004a10b0(uVar3,param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_005af120();
    if (*(int *)(iVar1 + 0x1e4) == 0) goto LAB_005af0a9;
    iVar1 = 0;
  }
  else {
LAB_005af0a9:
    iVar1 = 1;
  }
  *(uint *)(param_1 + 0x130) =
       (iVar1 << 0xb ^ *(uint *)(param_1 + 0x130)) & 0x800 ^ *(uint *)(param_1 + 0x130);
  fVar2 = (float10)FUN_00647b30(0xbdcccccd,0x3dcccccd);
  *(float *)(param_1 + 0x204) = (float)fVar2;
LAB_005af0de:
  return (*(int *)(param_1 + 0x130) << 0x14) >> 0x1f;
}

