
undefined4 FUN_006bfdd7(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  
  FUN_006c0ab9();
  uVar1 = FUN_006c3594(DAT_008174b4);
  if (uVar1 < (uint)((int)DAT_008174b0 + (4 - DAT_008174b4))) {
    iVar2 = FUN_006c3594(DAT_008174b4);
    iVar2 = FUN_006c1f76(DAT_008174b4,iVar2 + 0x10);
    if (iVar2 == 0) {
      param_1 = 0;
      goto LAB_006bfe4c;
    }
    DAT_008174b0 = (undefined4 *)(iVar2 + ((int)DAT_008174b0 - DAT_008174b4 >> 2) * 4);
    DAT_008174b4 = iVar2;
  }
  *DAT_008174b0 = param_1;
  DAT_008174b0 = DAT_008174b0 + 1;
LAB_006bfe4c:
  FUN_006c0ac2();
  return param_1;
}

