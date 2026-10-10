
void __fastcall FUN_005dfa30(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e1158;
  local_c = ExceptionList;
  uVar1 = *(uint *)(param_1 + 0x48);
  uVar2 = *(uint *)(param_1 + 0x4c);
  ExceptionList = &local_c;
  FUN_00649600();
  iVar3 = (int)*(short *)(&DAT_0076cd88 + ((uVar1 ^ uVar2) * -0xfb & 0xfff) * 2);
  for (iVar4 = iVar3; iVar4 != -1; iVar4 = (int)*(short *)(DAT_0076f648 + iVar4 * 0x14 + 0xe)) {
  }
  do {
    if (iVar3 == -1) {
LAB_005dface:
      local_4 = 0xffffffff;
      FUN_00649720();
      ExceptionList = local_c;
      return;
    }
    iVar4 = *(int *)(DAT_0076f648 + iVar3 * 0x14);
    if (((iVar4 != 0) && (*(uint *)(iVar4 + 8) == uVar1)) && (*(uint *)(iVar4 + 0xc) == uVar2)) {
      if (iVar3 != -1) {
        iVar4 = *(int *)(DAT_0076f648 + iVar3 * 0x14);
        local_4 = 0xffffffff;
        FUN_00649720();
        if (iVar4 != 0) {
          FUN_00649b60(param_1 + 0x18);
          FUN_004a1130();
        }
        ExceptionList = local_c;
        return;
      }
      goto LAB_005dface;
    }
    iVar3 = (int)*(short *)(DAT_0076f648 + iVar3 * 0x14 + 0xe);
  } while( true );
}

