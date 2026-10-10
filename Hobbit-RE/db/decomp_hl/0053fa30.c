
void __thiscall FUN_0053fa30(int param_1,int param_2,float param_3,int param_4,undefined4 param_5)

{
  uint *puVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar4 = __ftol();
  uVar5 = uVar4 & 0x1f;
  iVar6 = (int)uVar4 >> 5;
  if ((iVar6 == *(short *)(param_1 + 6)) && (uVar5 == 0)) {
    iVar6 = iVar6 + -1;
    uVar5 = 0x20;
  }
  sVar2 = *(short *)(param_1 + 8);
  iVar3 = *(int *)(param_2 + 0x74);
  DAT_007670a4 = FUN_0053f540(param_2);
  iVar6 = *(int *)(iVar3 + (sVar2 + iVar6) * 0x18 + 0x14);
  puVar1 = (uint *)(DAT_007670a4 + param_4 * 4);
  DAT_007670ac = *puVar1 >> 0x1e;
  DAT_007670a0 = *puVar1 >> 0x1c & 3;
  DAT_007670b0 = *puVar1 >> 0x1a & 3;
  DAT_007670b4 = *puVar1 & 0x3ffff;
  DAT_0076709c = *(int *)(&DAT_00737aa8 + DAT_007670ac * 4) * iVar6 +
                 *(int *)(&DAT_00737a98 + DAT_007670ac * 4) + DAT_007670b4;
  DAT_007670a8 = *(int *)(&DAT_00737ac8 + DAT_007670a0 * 4) * iVar6 +
                 *(int *)(&DAT_00737ab8 + DAT_007670a0 * 4) + DAT_0076709c;
  FUN_00540000(uVar5,param_3 - (float)(int)uVar4,param_5);
  return;
}

