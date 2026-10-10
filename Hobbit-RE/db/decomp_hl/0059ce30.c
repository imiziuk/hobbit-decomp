
void __fastcall FUN_0059ce30(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 0x24);
  if ((((iVar2 < iVar3) && (0 < iVar3)) &&
      (iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x28) + iVar2 * 4),
      *(int *)(iVar3 + 0xc) == *(int *)(param_1 + 0x28))) &&
     (fVar1 = *(float *)(iVar3 + 8),
     fVar1 < *(float *)(param_1 + 0x38) != (fVar1 == *(float *)(param_1 + 0x38)))) {
    *(int *)(param_1 + 0x2c) = iVar2 + 1;
  }
  return;
}

