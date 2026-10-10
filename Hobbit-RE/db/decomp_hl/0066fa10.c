
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0066fa10(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int unaff_ESI;
  bool bVar4;
  int *piVar5;
  
  piVar5 = (int *)*param_1;
  (**(code **)(*piVar5 + 100))(piVar5);
  iVar1 = (**(code **)(*(int *)*param_1 + 0x24))((int *)*param_1,0x14,&stack0xffffffe8);
  iVar2 = iVar1;
  if (iVar1 < 0) {
    iVar2 = -iVar1;
  }
  uVar3 = (uint)(iVar1 < 0);
  if (iVar1 < 0) {
    iVar2 = (**(code **)(*(int *)*param_1 + 0x1c))((int *)*param_1);
    while( true ) {
      bVar4 = iVar2 < 0;
      if (bVar4) {
        iVar2 = -iVar2;
      }
      uVar3 = (uint)bVar4;
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
      FUN_0066f780(&DAT_007f1fbc + iVar1,(byte)(&stack0xffffffe8)[iVar1] >> 7);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 8);
    FUN_0066fb30(&DAT_007f1fc8,(float)(int)piVar5 * _DAT_006e95a8);
    FUN_0066fb30(&DAT_007f1fcc,(float)unaff_ESI * _DAT_006e95a8);
    FUN_0066fb30(&DAT_007f1fd0,(float)unaff_EBP * _DAT_006e95a8);
  }
  return CONCAT44(uVar3,iVar2);
}

