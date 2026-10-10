
void __thiscall FUN_004d0e10(int param_1,undefined4 param_2)

{
  int iVar1;
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38 [3];
  undefined1 local_2c [32];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d4d78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_special_surfaces__OnImport_0072d6e8);
  local_4 = 0;
  FUN_004aa740(param_2);
  local_3c = 0;
  local_40 = 0;
  local_44 = (uint)(*(char *)(param_1 + 0x7c) == '\x06');
  FUN_006405b0(s_IsGoldPile_0072d6dc,&local_40);
  FUN_004ac4e0(local_40);
  FUN_006405b0(s_IsHidden_0072d6d0,&local_3c);
  FUN_004d22c0(local_3c);
  FUN_006405b0(s_Decals_0072d6c8,&local_44);
  FUN_004d0b40(local_44);
  local_38[0] = 0;
  FUN_006405b0(s_IsSqueakyChickenBoard_0072d6b0,local_38);
  *(byte *)(param_1 + 0x127) =
       ((char)local_38[0] << 3 ^ *(byte *)(param_1 + 0x127)) & 8 ^ *(byte *)(param_1 + 0x127);
  iVar1 = FUN_00640480(s_Surface_Type_0072d6a0,local_2c);
  if (iVar1 != 0) {
    iVar1 = FUN_004d1140(local_2c);
    if ((iVar1 < 0) || (9 < iVar1)) {
      *(byte *)(param_1 + 0x126) = *(byte *)(param_1 + 0x126) & 7 | 0x10;
    }
    else {
      *(byte *)(param_1 + 0x126) = *(byte *)(param_1 + 0x126) & 7 ^ (char)iVar1 << 3;
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

