
void FUN_0048b5a0(void)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = FUN_0054c5c0(0x2d,s_C__projects_meridian_Support_Obj_007293d0,0x492);
  sVar1 = FUN_0054c7c0();
  while (-1 < sVar1) {
    FUN_006b7660();
    sVar1 = FUN_0054c7c0();
  }
  FUN_0054c880(uVar2);
  FUN_00559d30(s_effects_resources_txt_007293b8);
  FUN_00559b70(s_effects_resources_txt_007293b8);
  uVar2 = FUN_0054c5c0(0x2d,s_C__projects_meridian_Support_Obj_007293d0,0x49f);
  sVar1 = FUN_0054c7c0();
  while (-1 < sVar1) {
    if (sVar1 == -1) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)(DAT_0076f648 + sVar1 * 0x14);
      if (uVar3 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = -(uint)((*(byte *)(uVar3 + 0x7f) & 0x10) != 0) & uVar3;
      }
    }
    FUN_00488c30(uVar3 + 0xa8);
    sVar1 = FUN_0054c7c0();
  }
  FUN_0054c880(uVar2);
  return;
}

