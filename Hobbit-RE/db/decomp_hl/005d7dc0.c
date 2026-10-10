
void __fastcall FUN_005d7dc0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e0908;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006501d0();
  uVar1 = *(uint *)(param_1 + 0x4c);
  uVar2 = *(uint *)(param_1 + 0x48);
  local_4 = 0;
  FUN_00649600();
  iVar3 = (int)*(short *)(&DAT_0076cd88 + ((uVar2 ^ uVar1) * -0xfb & 0xfff) * 2);
  for (iVar4 = iVar3; iVar4 != -1; iVar4 = (int)*(short *)(DAT_0076f648 + iVar4 * 0x14 + 0xe)) {
  }
  if (iVar3 == -1) {
LAB_005d7e8b:
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649720();
  }
  else {
    do {
      iVar4 = *(int *)(DAT_0076f648 + iVar3 * 0x14);
      if (((iVar4 != 0) && (*(uint *)(iVar4 + 8) == uVar2)) && (*(uint *)(iVar4 + 0xc) == uVar1)) {
        if (iVar3 == -1) goto LAB_005d7e8b;
        iVar4 = *(int *)(DAT_0076f648 + iVar3 * 0x14);
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_00649720();
        if (iVar4 != 0) {
          FUN_00649b60(param_1 + 0x18);
          local_4 = local_4 & 0xffffff00;
          FUN_004aa020();
          FUN_005aea00();
        }
        goto LAB_005d7ed8;
      }
      iVar3 = (int)*(short *)(DAT_0076f648 + iVar3 * 0x14 + 0xe);
    } while (iVar3 != -1);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649720();
  }
LAB_005d7ed8:
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = local_c;
  return;
}

