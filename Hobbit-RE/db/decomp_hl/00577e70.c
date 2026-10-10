
bool __fastcall FUN_00577e70(int param_1)

{
  short sVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dbbf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_Coll_CheckCollisions_00740264);
  *(short *)(param_1 + 0x3d44) = *(short *)(param_1 + 0x3d44) + 1;
  local_4 = 0;
  if (*(int *)(param_1 + 0x43d8) == 0) {
    FUN_00577b70();
    iVar4 = *(int *)(param_1 + 0x4388);
    while (iVar4 != -1) {
      uVar2 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
      if (uVar2 == 0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)(-(uint)((*(byte *)(uVar2 + 0x7f) & 0x10) != 0) & uVar2);
      }
      (**(code **)(*piVar3 + 0x70))();
      sVar1 = *(short *)(DAT_0076f648 + 0xc + iVar4 * 0x14);
      *(short *)(param_1 + 0x3d44) = *(short *)(param_1 + 0x3d44) + 1;
      iVar4 = (int)sVar1;
    }
    FUN_00577e00();
  }
  else {
    FUN_00579b20();
  }
  FUN_00647700(param_1,*(undefined4 *)(param_1 + 0x480),0x48,&LAB_00577900);
  iVar4 = *(int *)(param_1 + 0x480);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return 0 < iVar4;
}

