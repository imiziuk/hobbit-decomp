
void __fastcall FUN_005a2ef0(int param_1)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    iVar5 = 0;
    do {
      iVar4 = *(int *)(param_1 + 0x14) + iVar5;
      iVar6 = iVar6 + 1;
      fVar2 = *(float *)(param_1 + 8);
      fVar3 = *(float *)(param_1 + 0xc);
      *(float *)(iVar4 + 0x18) =
           *(float *)(param_1 + 4) + *(float *)(*(int *)(param_1 + 0x14) + 0x24 + iVar5);
      *(float *)(iVar4 + 0x20) = *(float *)(iVar4 + 0x2c) + fVar3;
      *(float *)(iVar4 + 0x1c) = *(float *)(iVar4 + 0x28) + fVar2;
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0x14) + 0x24 + iVar5);
      puVar1[2] = 0;
      puVar1[1] = 0;
      *puVar1 = 0;
      iVar5 = iVar5 + 0x34;
    } while (iVar6 < *(int *)(param_1 + 0x10));
  }
  return;
}

