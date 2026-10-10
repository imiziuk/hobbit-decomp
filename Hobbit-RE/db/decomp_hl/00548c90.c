
undefined4 __thiscall FUN_00548c90(int param_1,char *param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  int local_20;
  undefined1 local_1c [4];
  char *local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d95c8;
  local_c = ExceptionList;
  local_1c[0] = param_2._0_1_;
  ExceptionList = &local_c;
  FUN_0054a060(0);
  uVar3 = 0xffffffff;
  pcVar5 = param_2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  cVar1 = FUN_0054a310(uVar3,1);
  if (cVar1 != '\0') {
    pcVar5 = local_18;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)param_2;
      param_2 = param_2 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar5 = *param_2;
      param_2 = param_2 + 1;
      pcVar5 = pcVar5 + 1;
    }
    FUN_0054a2f0(uVar3);
  }
  pcVar5 = (char *)0x0;
  local_4 = 0;
  FUN_00549fe0();
  pcVar7 = local_18;
  FUN_00549fe0();
  if (local_18 != (char *)0x0) {
    pcVar5 = local_18 + local_14;
  }
  FUN_00549fe0();
  for (pcVar6 = local_18; pcVar6 != pcVar5; pcVar6 = pcVar6 + 1) {
    cVar1 = FUN_006c0e60((int)*pcVar6);
    *pcVar7 = cVar1;
    pcVar7 = pcVar7 + 1;
  }
  FUN_0054a190(&local_20,local_1c);
  if (local_20 == *(int *)(param_1 + 0x40)) {
    if (local_18 != (char *)0x0) {
      cVar1 = local_18[-1];
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        local_18[-1] = cVar1 + -1;
        ExceptionList = local_c;
        return 0xffffffff;
      }
      FUN_006bf840(local_18 + -1);
    }
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined4 *)(local_20 + 0x1c);
    if (local_18 != (char *)0x0) {
      cVar1 = local_18[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_006bf840(local_18 + -1);
      }
      else {
        local_18[-1] = cVar1 + -1;
      }
    }
  }
  ExceptionList = local_c;
  return uVar2;
}

