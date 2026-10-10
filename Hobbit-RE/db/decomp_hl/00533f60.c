
void FUN_00533f60(void)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 local_10c;
  undefined4 local_10b [63];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d8cce;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0x6bc);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0063ddb0();
  }
  local_10c = 0;
  puVar5 = local_10b;
  for (iVar4 = 0x3f; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_4 = 0xffffffff;
  *(undefined2 *)puVar5 = 0;
  FUN_005496c0();
  FUN_0063df60();
  iVar4 = FUN_0063e510();
  while (iVar4 == 1) {
    iVar4 = FUN_00647ed0();
    if ((iVar4 == 0) && (0 < *(int *)(iVar2 + 0x100))) {
      iVar4 = 0;
      do {
        iVar3 = FUN_0063e6a0();
        if (iVar3 != 0) {
          local_10c = 0;
          FUN_0063f5e0();
          FUN_0063f4e0();
          FUN_00649b20(&local_10c);
          iVar3 = FUN_00467620();
          *(undefined4 *)(&DAT_00764600 + iVar3 * 4) = 0;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(iVar2 + 0x100));
    }
    iVar4 = FUN_0063e510();
  }
  FUN_0063df00();
  if (iVar2 != 0) {
    FUN_0063de30();
    FUN_006bf840();
  }
  ExceptionList = local_c;
  return;
}

