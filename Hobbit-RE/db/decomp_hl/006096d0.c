
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_006096d0(int param_1,int param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  
  if (param_2 != 0) {
    iVar5 = *(int *)(param_1 + 8);
    fVar1 = *(float *)(iVar5 + 400);
    fVar2 = *(float *)(iVar5 + 0x194);
    fVar3 = *(float *)(iVar5 + 0x198);
    iVar5 = FUN_005af120();
    if ((*(uint *)(*(int *)(iVar5 + 0x304) + 0x4c) & 0x200) == 0) {
      return 0xb;
    }
    fVar1 = SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
    fVar2 = *(float *)(param_1 + 0xc4) + _DAT_006e9358;
    if (((fVar2 < fVar1 != (NAN(fVar2) || NAN(fVar1))) ||
        (uVar4 = *(uint *)(*(int *)(param_1 + 8) + 0x130), (uVar4 & 0x400) != 0)) ||
       ((uVar4 & 1) != 0)) {
      return 8;
    }
  }
  return param_3;
}

