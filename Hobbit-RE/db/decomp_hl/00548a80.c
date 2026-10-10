
void __thiscall FUN_00548a80(int param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 local_2c;
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d95a8;
  local_c = ExceptionList;
  pcVar4 = (char *)((*(uint *)(param_1 + 0x18) & param_2) * 0x7c +
                   *(int *)(*(int *)(param_1 + 0x24) + 8 +
                           ((int)param_2 >> (*(byte *)(param_1 + 0x1e) & 0x1f)) * 0x18));
  uVar7 = 0xffffffff;
  local_1c[0] = (undefined1)param_2;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  pcVar8 = pcVar4;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  FUN_0054a250(pcVar4,~uVar7 - 1);
  local_4 = 0;
  puVar5 = (undefined4 *)FUN_0054ae00(local_28,local_1c);
  puVar6 = (undefined4 *)FUN_0054aae0(local_24,local_1c);
  uVar2 = *puVar6;
  uVar3 = *puVar5;
  local_2c = 0;
  FUN_0054b510(uVar2,uVar3,&local_2c,param_2);
  FUN_0054a0b0(local_20,uVar2,uVar3);
  local_4 = 0xffffffff;
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_006bf840((char *)(local_18 + -1));
    }
    else {
      *(char *)(local_18 + -1) = cVar1 + -1;
    }
  }
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  FUN_005c9210(param_2);
  ExceptionList = local_c;
  return;
}

