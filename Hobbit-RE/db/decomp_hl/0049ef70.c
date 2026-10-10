
undefined4 FUN_0049ef70(void)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d3683;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006501d0(s_NPCCreator___0072ac4c);
  uVar2 = 0;
  local_4 = 0;
  pvVar1 = operator_new(0x4e8);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_0049eff0();
  }
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = local_c;
  return uVar2;
}

