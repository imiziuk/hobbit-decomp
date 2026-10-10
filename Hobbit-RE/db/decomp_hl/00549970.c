
void __thiscall FUN_00549970(int param_1,undefined4 param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  
  FUN_0064f4f0(param_2,s__15s__15s__15s_0073cbbc,s_nLoads_0073cc20,s_BytesAllocated_0073cbe8,
               &DAT_00725c94);
  uVar5 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    if (*(int *)(param_1 + 0x10) < 0) goto LAB_00549a2c;
    do {
      if (*(int *)(param_1 + 0x24) != 0) {
        uVar2 = *(uint *)(param_1 + 0x18);
        puVar1 = (uint *)(*(int *)(param_1 + 0x24) +
                         ((int)uVar5 >> (*(byte *)(param_1 + 0x1e) & 0x1f)) * 0x18);
        uVar7 = __allshl();
        if (((uint)uVar7 & *puVar1) == 0 && ((uint)((ulonglong)uVar7 >> 0x20) & puVar1[1]) == 0) {
          iVar6 = (uVar2 & uVar5) * 0x7c;
          iVar3 = *(int *)(iVar6 + 100 + puVar1[2]);
          iVar6 = iVar6 + puVar1[2];
          if ((iVar3 < 0) || (3 < iVar3)) {
            iVar3 = 3;
          }
          if (*(int *)(iVar6 + 0x74) == 0) {
            pcVar4 = s_NOLOADER_0073cc14;
          }
          else {
            pcVar4 = *(char **)(*(int *)(iVar6 + 0x74) + 8);
          }
          FUN_0064f4f0(param_2,s___15d___15d___s___s___s_0073cbf8,(int)*(short *)(iVar6 + 0x6c),
                       *(undefined4 *)(iVar6 + 0x78),iVar6,pcVar4,
                       *(undefined4 *)(iVar3 * 4 + 0x73c8d0));
        }
      }
LAB_00549a2c:
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < *(int *)(param_1 + 0x10));
  }
  return;
}

