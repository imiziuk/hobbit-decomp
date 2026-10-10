
void FUN_005596a0(int param_1)

{
  byte *pbVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  
  iVar5 = 0;
  iVar6 = 0;
  if (param_1 == 0) {
    if (0 < DAT_00771f60) {
      iVar4 = 0;
      iVar7 = DAT_00771f64;
      iVar3 = DAT_00771f60;
      do {
        if ((*(byte *)(iVar4 + 0x43 + iVar7) & 0x10) != 0) {
          pbVar1 = (byte *)(iVar4 + 0x43 + iVar7);
          *pbVar1 = *pbVar1 & 0xef;
          pbVar1 = (byte *)(iVar4 + 0x42 + DAT_00771f64);
          *pbVar1 = *pbVar1 | 2;
          iVar5 = iVar5 + 1;
          iVar7 = DAT_00771f64;
        }
        if ((*(byte *)(iVar4 + 0x43 + iVar7) & 0x20) != 0) {
          pbVar1 = (byte *)(iVar4 + 0x43 + iVar7);
          *pbVar1 = *pbVar1 & 0xdf;
          puVar2 = (ushort *)(iVar4 + 0x42 + DAT_00771f64);
          *puVar2 = *puVar2 | 0x40;
          iVar6 = iVar6 + 1;
          iVar7 = DAT_00771f64;
        }
        iVar4 = iVar4 + 0x44;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  else if (0 < DAT_00771f60) {
    iVar3 = 0;
    iVar7 = DAT_00771f60;
    do {
      if ((*(byte *)(iVar3 + 0x42 + DAT_00771f64) & 1) == 0) {
        pbVar1 = (byte *)(iVar3 + 0x43 + DAT_00771f64);
        *pbVar1 = *pbVar1 & 0xef;
      }
      else {
        pbVar1 = (byte *)(iVar3 + 0x43 + DAT_00771f64);
        *pbVar1 = *pbVar1 | 0x10;
        pbVar1 = (byte *)(iVar3 + 0x42 + DAT_00771f64);
        *pbVar1 = *pbVar1 | 4;
        iVar5 = iVar5 + 1;
      }
      if ((*(byte *)(iVar3 + 0x42 + DAT_00771f64) & 8) == 0) {
        pbVar1 = (byte *)(iVar3 + 0x43 + DAT_00771f64);
        *pbVar1 = *pbVar1 & 0xdf;
      }
      else {
        pbVar1 = (byte *)(iVar3 + 0x43 + DAT_00771f64);
        *pbVar1 = *pbVar1 | 0x20;
        pbVar1 = (byte *)(iVar3 + 0x42 + DAT_00771f64);
        *pbVar1 = *pbVar1 | 0x80;
        iVar6 = iVar6 + 1;
      }
      iVar3 = iVar3 + 0x44;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  DAT_00771f74 = 1;
  FUN_0055b420();
  if (param_1 == 0) {
    FUN_0064e870(4,s__________________________________0073e144);
    pcVar8 = s_______________UN_Suspend_________0073e0f4;
  }
  else {
    FUN_0064e870(4,s__________________________________0073e144);
    pcVar8 = s_______________Suspend____________0073e11c;
  }
  FUN_0064e870(4,pcVar8);
  FUN_0064e870(4,s__________________________________0073e144);
  FUN_0064e870(4,s_ReActive__i_ReLoaded__i_0073e0d8,iVar5,iVar6);
  FUN_0064e870(4,s__________________________________0073e144);
  return;
}

