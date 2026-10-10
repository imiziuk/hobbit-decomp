
undefined8 FUN_0066fb60(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  bool bVar5;
  undefined4 local_100 [62];
  int iStack_8;
  
  puVar4 = local_100;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  (**(code **)(*(int *)*param_1 + 100))((int *)*param_1);
  iVar1 = (**(code **)(*(int *)*param_1 + 0x24))((int *)*param_1,0x100,&stack0xfffffefc);
  iVar2 = iVar1;
  if (iVar1 < 0) {
    iVar2 = -iVar1;
  }
  uVar3 = (uint)(iVar1 < 0);
  if (iVar1 < 0) {
    iVar2 = (**(code **)(*(int *)*param_1 + 0x1c))((int *)*param_1);
    while( true ) {
      bVar5 = iVar2 < 0;
      if (bVar5) {
        iVar2 = -iVar2;
      }
      uVar3 = (uint)bVar5;
      iVar1 = iVar2;
      if (uVar3 != 0) {
        iVar1 = -iVar2;
      }
      if (iVar1 != -0x7ff8ffe2) break;
      iVar2 = (**(code **)(*(int *)*param_1 + 0x1c))((int *)*param_1);
    }
  }
  else {
    iVar1 = 0;
    do {
      FUN_0066f780(&DAT_007f1854 + iVar1 + iStack_8 * 0xed,
                   *(byte *)((int)local_100 + iVar1 + -0x10) >> 7);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0xee);
  }
  return CONCAT44(uVar3,iVar2);
}

