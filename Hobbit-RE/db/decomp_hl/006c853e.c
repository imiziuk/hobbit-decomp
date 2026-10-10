
undefined4 FUN_006c853e(uint param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if ((param_1 < DAT_00816480) &&
     ((*(byte *)((&DAT_00816380)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_006ca856(param_1);
    uVar1 = FUN_006c85a3(param_1,param_2,param_3);
    FUN_006ca8b5(param_1);
    return uVar1;
  }
  puVar2 = (undefined4 *)FUN_006c5643();
  *puVar2 = 9;
  puVar2 = (undefined4 *)FUN_006c564c();
  *puVar2 = 0;
  return 0xffffffff;
}

