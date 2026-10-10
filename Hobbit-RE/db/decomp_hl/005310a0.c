
char * __fastcall FUN_005310a0(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  
  iVar3 = FUN_00659e10(*(undefined4 *)(*(int *)(param_1 + 0x1ac) * 0x30 + 0x14c + param_1));
  iVar4 = FUN_00659e70(*(undefined4 *)(*(int *)(param_1 + 0x1ac) * 0x30 + 0x14c + param_1));
  iVar5 = FUN_00659ed0(*(undefined4 *)(*(int *)(param_1 + 0x1ac) * 0x30 + 0x14c + param_1));
  iVar6 = FUN_00531430();
  if (((iVar3 == 0) && (iVar4 == 0)) && (iVar5 == 0)) {
    puVar1 = (undefined4 *)(iVar6 * 0x30 + 0x14c + param_1);
    iVar3 = FUN_00659e10(*(undefined4 *)(iVar6 * 0x30 + 0x14c + param_1));
    iVar4 = FUN_00659e70(*puVar1);
    iVar5 = FUN_00659ed0(*puVar1);
    if (((iVar3 == 0) && (iVar4 == 0)) && (iVar5 == 0)) goto LAB_0053118c;
  }
  pcVar7 = (char *)FUN_005327d0(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x60));
  iVar3 = -1;
  pcVar8 = pcVar7;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  if ((iVar3 != -2) && (DAT_00736e78 == 0)) {
    return pcVar7;
  }
LAB_0053118c:
  return s_MUSIC_Silence_00724fb8;
}

