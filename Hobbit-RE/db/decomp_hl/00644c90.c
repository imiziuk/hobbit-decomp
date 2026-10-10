
void FUN_00644c90(void)

{
  undefined4 uVar1;
  int *piVar2;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e5f38;
  local_c = ExceptionList;
  piVar2 = DAT_007cccf0;
  ExceptionList = &local_c;
  if (DAT_007cccf0 != (int *)0x0) {
    do {
      FUN_00645370(piVar2[1],piVar2[2],piVar2[3],piVar2[4]);
      FUN_00649920(local_10,s_Registering_Method____s____s___s_0074b898,piVar2[1],piVar2[2],
                   piVar2[3]);
      local_4 = 0;
      uVar1 = FUN_00649940();
      FUN_0064e7d0(uVar1);
      local_4 = 0xffffffff;
      FUN_00649950();
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)0x0);
  }
  ExceptionList = local_c;
  return;
}

