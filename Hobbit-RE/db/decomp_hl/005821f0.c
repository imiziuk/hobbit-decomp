
void __fastcall FUN_005821f0(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  int *local_4;
  
  iVar4 = param_1[2];
  param_1[2] = iVar4 + 1;
  if ((iVar4 == 0) && (iVar4 = 0, 0 < param_1[1] + *param_1)) {
    local_4 = param_1 + 3;
    puVar3 = (uint *)(param_1 + 7);
    do {
      if ((short)*local_4 == -1) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(uint *)(DAT_0076f648 + (short)*local_4 * 0x14);
        if (uVar2 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = -(uint)((*(byte *)(uVar2 + 0x7f) & 0x10) != 0) & uVar2;
        }
      }
      uVar5 = 0;
      if ((uVar2 != 0) &&
         (((*(char *)(uVar2 + 0x7c) != '\x03' && (*(char *)(uVar2 + 0x7c) != ',')) ||
          (iVar1 = FUN_004948f0(), uVar5 = uVar2, iVar1 == 0)))) {
        uVar5 = 0;
      }
      *puVar3 = uVar5;
      iVar4 = iVar4 + 1;
      local_4 = (int *)((int)local_4 + 2);
      puVar3 = puVar3 + 1;
    } while (iVar4 < param_1[1] + *param_1);
  }
  return;
}

