
void FUN_00674a00(int *param_1,int param_2,int param_3)

{
  char cVar1;
  short sVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *unaff_EBX;
  int iVar7;
  uint uVar8;
  uint unaff_retaddr;
  uint local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  int *piStack_18;
  int local_14;
  undefined4 uStack_8;
  int iStack_4;
  
  piVar4 = param_1;
  local_24 = param_3;
  cVar1 = (char)param_1[7];
  local_14 = 0;
  local_1c = 0;
  if (cVar1 == '\0') {
    sVar2 = (short)param_1[5];
  }
  else {
    sVar2 = *(short *)(*param_1 + 4);
  }
  local_28 = (uint)sVar2;
  if (cVar1 == '\0') {
    sVar2 = *(short *)((int)param_1 + 0x16);
  }
  else {
    sVar2 = *(short *)(*param_1 + 6);
  }
  local_20 = (uint)sVar2;
  param_1 = (int *)(cVar1 + 1);
  FUN_00661f20(s_TextureQuality_00750734,0,2);
  iVar5 = __ftol();
  if ((char)piVar4[7] < iVar5) {
    iVar5 = (int)(char)piVar4[7];
  }
  local_20 = local_20 >> ((byte)iVar5 & 0x1f);
  uVar8 = local_28 >> ((byte)iVar5 & 0x1f);
  param_1 = (int *)((int)param_1 - iVar5);
  local_28 = uVar8;
  FUN_0067e0c4(DAT_007f1000,&local_28,&local_20,&param_1,0,&local_24,1);
  for (; local_28 < uVar8; uVar8 = (int)uVar8 >> 1) {
    iVar5 = iVar5 + 1;
  }
  if ((int)(char)piVar4[7] + 1U < (uint)(iVar5 + (int)param_1)) {
    param_1 = (int *)(((char)piVar4[7] - iVar5) + 1);
  }
  if ((param_3 == 0x1c) && (local_24 == 0x15)) {
    local_24 = 0x33545844;
    FUN_0067e0c4(DAT_007f1000,&local_28,&local_20,&param_1,0,&local_24,1);
  }
  (**(code **)(*DAT_007f1000 + 0x10))(DAT_007f1000);
  FUN_0067e0ec(DAT_007f1000,unaff_EBX,local_24,unaff_retaddr,0,local_28,1,&piStack_18);
  local_1c = 0;
  if (unaff_retaddr != 0) {
    param_2 = iVar5 * 8;
    do {
      if (local_1c + iVar5 == -1) {
        iVar6 = *piVar4;
        iVar7 = iVar6;
      }
      else {
        iVar6 = *piVar4;
        iVar7 = iVar6;
        if ((char)piVar4[7] != '\0') {
          iVar7 = *(int *)(param_2 + iVar6) + iVar6;
        }
      }
      if (iVar7 != 0) {
        if ((char)piVar4[7] == '\0') {
          sVar2 = (short)piVar4[6];
        }
        else {
          sVar2 = *(short *)(param_2 + 4 + iVar6);
        }
        iVar6 = *(int *)(&DAT_006f6d50 + *(char *)((int)piVar4 + 0x1d) * 0x7c);
        (**(code **)(*piStack_18 + 0x3c))(piStack_18,local_1c,&local_20);
        local_20 = 0;
        local_1c = 0;
        if ((char)piVar4[7] == '\0') {
          sVar3 = (short)piVar4[5];
        }
        else {
          sVar3 = *(short *)(iStack_4 + 4 + *piVar4);
        }
        piStack_18 = (int *)(int)sVar3;
        if ((char)piVar4[7] == '\0') {
          sVar3 = *(short *)((int)piVar4 + 0x16);
        }
        else {
          sVar3 = *(short *)(iStack_4 + 6 + *piVar4);
        }
        local_14 = (int)sVar3;
        FUN_0067de8e(unaff_EBX,0,0,iVar7,uStack_8,(uint)(iVar6 * sVar2) >> 3,0,&local_20,0xffffffff,
                     0);
        (**(code **)(*unaff_EBX + 8))(unaff_EBX);
      }
      local_1c = local_1c + 1;
      param_2 = param_2 + 8;
    } while (local_1c < unaff_retaddr);
  }
  iVar5 = FUN_00674910(piStack_18);
  piVar4[4] = iVar5;
  return;
}

