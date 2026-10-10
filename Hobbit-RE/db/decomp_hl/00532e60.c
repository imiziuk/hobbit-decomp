
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00532e60(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  FUN_0065a050(*(undefined4 *)(*(int *)(param_1 + 0x1ac) * 0x30 + 0x14c + param_1),
               *(undefined4 *)(param_1 + 0x1c4));
  iVar1 = *(int *)(param_1 + 0x1ac) * 0x30;
  if (*(int *)(iVar1 + 0x178 + param_1) == 1) {
    fVar3 = (float10)FUN_0065a5b0(*(undefined4 *)(iVar1 + param_1 + 0x14c));
    if ((float10)*(float *)(param_1 + 0x1bc) < fVar3) {
      FUN_00659c80(*(undefined4 *)(*(int *)(param_1 + 0x1ac) * 0x30 + 0x14c + param_1),0x3d4ccccd);
      uVar2 = FUN_00531430();
      *(undefined4 *)(param_1 + 0x1ac) = uVar2;
      FUN_00532cf0();
    }
  }
  iVar1 = *(int *)(param_1 + 0x1ac) * 0x30 + param_1;
  if (*(int *)(iVar1 + 0x178) == 3) {
    FUN_00659c80(*(undefined4 *)(iVar1 + 0x14c),0x3d4ccccd);
    *(undefined4 *)(*(int *)(param_1 + 0x1ac) * 0x30 + 0x178 + param_1) = 0;
    FUN_00532830();
    uVar2 = FUN_00531430();
    *(undefined4 *)(param_1 + 0x1ac) = uVar2;
    FUN_00532cf0();
  }
  iVar1 = *(int *)(param_1 + 0x1ac) * 0x30;
  if (*(int *)(iVar1 + 0x178 + param_1) == 2) {
    if (*(float *)(param_1 + 0x1c4) < _DAT_006edbfc !=
        (NAN(*(float *)(param_1 + 0x1c4)) || NAN(_DAT_006edbfc))) {
      FUN_00659c80(*(undefined4 *)(iVar1 + param_1 + 0x14c),0x3d4ccccd);
      uVar2 = FUN_00531430();
      *(undefined4 *)(param_1 + 0x1ac) = uVar2;
      FUN_00532cf0();
      FUN_00532c20(0x3f800000,*(undefined4 *)(*(int *)(param_1 + 0x1ac) * 0x30 + 0x168 + param_1),2)
      ;
      return;
    }
    FUN_00532c20(0,*(undefined4 *)(param_1 + 0x1cc),1);
  }
  return;
}

