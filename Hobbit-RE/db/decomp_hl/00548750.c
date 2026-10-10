
void __fastcall FUN_00548750(int param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  char *pcVar7;
  
  iVar4 = FUN_0064f210(s_ResourceStats_txt_0073ca10,&DAT_0072af74);
  if (iVar4 != 0) {
    FUN_0064f4f0(iVar4,s__________________________________0073c9e8);
    FUN_0064f4f0(iVar4,s_RESOURCE_MANAGER_0073c9cc);
    FUN_0064f4f0(iVar4,s__________________________________0073c9e8);
    FUN_0064f4f0(iVar4,s_LOADERS_AVAILABLE__0073c9b8);
    for (iVar2 = DAT_0076cd70; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xc)) {
      FUN_0064f4f0(iVar4,s__2d___16s__16s_0073c9a8,0,*(undefined4 *)(iVar2 + 8),
                   *(undefined4 *)(iVar2 + 4));
    }
    FUN_0064f4f0(iVar4,s_RESOURCES_0073c99c);
    uVar5 = 0;
    if (0 < *(int *)(param_1 + 0x10)) {
      if (*(int *)(param_1 + 0x10) < 0) goto LAB_005488ac;
      do {
        if (*(int *)(param_1 + 0x24) != 0) {
          uVar3 = *(uint *)(param_1 + 0x18);
          puVar1 = (uint *)(*(int *)(param_1 + 0x24) +
                           ((int)uVar5 >> (*(byte *)(param_1 + 0x1e) & 0x1f)) * 0x18);
          uVar6 = __allshl();
          if (((uint)uVar6 & *puVar1) == 0 && ((uint)((ulonglong)uVar6 >> 0x20) & puVar1[1]) == 0) {
            iVar2 = *(int *)((uVar3 & uVar5) * 0x7c + 100 + puVar1[2]);
            if (iVar2 == 0) {
              pcVar7 = s__NOT_LOADED__0073c96c;
LAB_00548862:
              FUN_0064f4f0(iVar4,pcVar7);
            }
            else {
              if (iVar2 == 1) {
                pcVar7 = s__LOADED__0073c97c;
                goto LAB_00548862;
              }
              if (iVar2 == 2) {
                pcVar7 = s__FAILED_LOAD__0073c98c;
                goto LAB_00548862;
              }
            }
            iVar2 = *(int *)(*(int *)(param_1 + 0x24) + 8 +
                            ((int)uVar5 >> (*(byte *)(param_1 + 0x1e) & 0x1f)) * 0x18) +
                    (*(uint *)(param_1 + 0x18) & uVar5) * 0x7c;
            FUN_0064f4f0(iVar4,s_H__03d_L__03d_LOADS__05d_NM__s_0073c94c,
                         (int)*(short *)(iVar2 + 0x70),(int)*(short *)(iVar2 + 0x6e),
                         (int)*(short *)(iVar2 + 0x6c),iVar2);
          }
        }
LAB_005488ac:
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < *(int *)(param_1 + 0x10));
    }
    FUN_0064f2b0(iVar4);
  }
  return;
}

