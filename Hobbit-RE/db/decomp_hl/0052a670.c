
undefined4 __thiscall FUN_0052a670(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = *(int *)(param_1 + 0x7c);
  if (iVar2 == 0) {
    pcVar3 = s_Ch00_DreamWorld_0071fe78;
  }
  else if (iVar2 == 1) {
    pcVar3 = s_Ch01_Hobbiton_0071ee70;
  }
  else if (iVar2 == 2) {
    pcVar3 = s_Ch02_RoastMutton_0071fef4;
  }
  else if (iVar2 == 3) {
    pcVar3 = s_Ch02a_TrollHole_0071fee4;
  }
  else if (iVar2 == 4) {
    pcVar3 = s_Ch4_Overhill_0071fed4;
  }
  else if (iVar2 == 5) {
    pcVar3 = s_Ch05_Swordlight_0071ce90;
  }
  else if (iVar2 == 6) {
    pcVar3 = s_Mirkwood_00735db8;
  }
  else if (iVar2 == 7) {
    pcVar3 = s_Ch07_BarrelsOutOfBond_0071febc;
  }
  else if (iVar2 == 8) {
    pcVar3 = s_Ch08_LakeTown_00735da8;
  }
  else if (iVar2 == 9) {
    pcVar3 = s_Ch09_Smaug_0071feb0;
  }
  else if (iVar2 == 10) {
    pcVar3 = s_Ch10_Lonely_Mountain_0071fe98;
  }
  else if (iVar2 == 0xb) {
    pcVar3 = s_Ch11_CloudsBurst_0071f4a4;
  }
  else {
    if (DAT_00760104 == 0) goto LAB_0052a769;
    pcVar3 = &DAT_0075cec0;
  }
  FUN_00647d10(param_1 + 0x504,pcVar3);
LAB_0052a769:
  pcVar3 = (char *)(param_1 + 0x504);
  param_2 = param_2 - (int)pcVar3;
  do {
    cVar1 = *pcVar3;
    pcVar3[param_2] = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  return 1;
}

