
void FUN_00559b70(char *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 local_7c8 [256];
  undefined1 local_6c8 [256];
  int local_5c8;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9fc6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_layer_mgr__LoadResourcesFromFile_0073e1f8);
  uVar5 = 0xffffffff;
  pcVar7 = param_1;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  uVar5 = ~uVar5 - 1;
  local_4 = 0;
  cVar2 = FUN_0054a310(uVar5,1);
  if (cVar2 != '\0') {
    pcVar7 = param_1;
    pcVar8 = DAT_00771f4c;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    DAT_00771f50 = uVar5;
    DAT_00771f4c[uVar5] = '\0';
  }
  FUN_0063ddb0();
  uVar1 = DAT_0076cd78;
  local_4 = CONCAT31(local_4._1_3_,1);
  DAT_0076cd78 = 0;
  iVar3 = FUN_0063df60(param_1);
  if (iVar3 != 0) {
    iVar3 = FUN_0063e510();
    while (iVar3 != 0) {
      iVar3 = FUN_00647ed0(local_6c8,s_Resources_007306f8);
      if ((iVar3 == 0) && (iVar3 = local_5c8, 0 < local_5c8)) {
        do {
          FUN_0063e6a0();
          FUN_0063ea10(local_6c8,s_Name_s_007306f0,local_7c8);
          iVar4 = FUN_00548de0(local_7c8);
          if (iVar4 == 0) {
            FUN_0064e7d0(s_Failed_to_load_resource___s_007306a0,local_7c8);
          }
          FUN_004f9d20();
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      iVar3 = FUN_0063e510();
    }
    FUN_0063df00();
  }
  local_4 = local_4 & 0xffffff00;
  DAT_0076cd78 = uVar1;
  FUN_0063de30();
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

