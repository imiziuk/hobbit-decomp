
undefined4 * __thiscall FUN_00676660(int param_1,undefined4 param_2,char *param_3)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_4 = param_1 + 0x1404;
  puVar6 = (undefined4 *)0x0;
  local_14 = 0;
  local_c = 0;
  local_10 = 0;
  local_8 = param_1;
  FUN_00655890(1);
  uVar3 = param_2;
  cVar2 = *param_3;
  pcVar5 = param_3;
  while (cVar2 != '\0') {
    if ((cVar2 == 'r') || (cVar2 == 'R')) {
      local_14 = 1;
    }
    if ((cVar2 == 'w') || (cVar2 == 'W')) {
      local_c = 1;
    }
    if ((cVar2 == 'a') || (cVar2 == 'A')) {
      local_10 = 1;
    }
    pcVar1 = pcVar5 + 1;
    pcVar5 = pcVar5 + 1;
    cVar2 = *pcVar1;
  }
  if (DAT_007f8714 != 0) {
    if (local_c == 0) {
      if (((DAT_007f8718 == 0) ||
          (iVar4 = FUN_00676570(param_2,&param_3,&param_2,&local_c), iVar4 == 0)) ||
         (puVar6 = (undefined4 *)FUN_006761b0(), puVar6 == (undefined4 *)0x0)) {
        iVar4 = FUN_00677180(uVar3,0);
        if (iVar4 != 0) {
          puVar6 = (undefined4 *)FUN_006761b0();
          if (puVar6 == (undefined4 *)0x0) {
            FUN_006771a0(iVar4);
          }
          else {
            puVar6[5] = local_14;
            puVar6[6] = 0;
            puVar6[7] = local_10;
            puVar6[8] = 0;
            puVar6[4] = iVar4;
            puVar6[1] = 0;
            puVar6[2] = *(undefined4 *)(iVar4 + 0x10);
            *puVar6 = 0;
            puVar6[3] = 0;
            puVar6[9] = 0;
            FUN_00647d70(puVar6 + 10,uVar3,0x100);
          }
        }
      }
      else {
        puVar6[4] = param_3;
        puVar6[5] = local_14;
        puVar6[7] = local_10;
        puVar6[6] = 0;
        puVar6[8] = 0;
        puVar6[1] = param_2;
        puVar6[2] = local_c;
        *puVar6 = 0;
        puVar6[3] = 0;
        puVar6[9] = 0;
        FUN_00647d70(puVar6 + 10,uVar3,0x100);
      }
      FUN_006558d0(1);
      return puVar6;
    }
    puVar6 = (undefined4 *)FUN_006761b0();
    if (DAT_007f86f0 != (code *)0x0) {
      iVar4 = (*DAT_007f86f0)(param_2,param_3);
      puVar6[8] = iVar4;
      if (iVar4 != 0) {
        puVar6[5] = 0;
        puVar6[6] = 0;
        puVar6[7] = 0;
        puVar6[4] = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        *puVar6 = 0;
        puVar6[3] = 0;
        puVar6[9] = 0;
        FUN_006558d0(1);
        return puVar6;
      }
    }
    FUN_006761f0(puVar6);
    FUN_006558d0(1);
  }
  return (undefined4 *)0x0;
}

