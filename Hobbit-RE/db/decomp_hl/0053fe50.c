
void __thiscall FUN_0053fe50(int param_1,int param_2,float param_3,int param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  undefined4 *puVar7;
  uint *puVar8;
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d92bc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_anim_keys__GetInterpKeys_00737b84);
  local_4 = 0;
  uVar4 = __ftol();
  iVar6 = (int)uVar4 >> 5;
  local_24 = uVar4 & 0x1f;
  if ((iVar6 == *(short *)(param_1 + 6)) && (local_24 == 0)) {
    iVar6 = iVar6 + -1;
    local_24 = 0x20;
  }
  sVar1 = *(short *)(param_1 + 8);
  iVar2 = *(int *)(param_2 + 0x74);
  puVar5 = (uint *)FUN_0053f540(param_2);
  param_2 = 0;
  if (0 < *(short *)(param_1 + 2)) {
    puVar7 = (undefined4 *)(param_4 + 0x14);
    puVar8 = puVar5;
    do {
      if ((*puVar8 & 0x40000) == 0) {
        iVar3 = *(int *)(iVar2 + (sVar1 + iVar6) * 0x18 + 0x14);
        DAT_007670ac = *puVar8 >> 0x1e;
        DAT_007670a0 = *puVar8 >> 0x1c & 3;
        DAT_007670b0 = *puVar8 >> 0x1a & 3;
        DAT_007670b4 = *puVar8 & 0x3ffff;
        DAT_0076709c = *(int *)(&DAT_00737aa8 + DAT_007670ac * 4) * iVar3 +
                       *(int *)(&DAT_00737a98 + DAT_007670ac * 4) + DAT_007670b4;
        DAT_007670a8 = *(int *)(&DAT_00737ac8 + DAT_007670a0 * 4) * iVar3 +
                       *(int *)(&DAT_00737ab8 + DAT_007670a0 * 4) + DAT_0076709c;
        DAT_007670a4 = puVar5;
        FUN_00540000(local_24,param_3 - (float)(int)uVar4,puVar7 + -5);
      }
      else {
        puVar7[-5] = 0x3f800000;
        puVar7[-4] = 0x3f800000;
        puVar7[-3] = 0x3f800000;
        puVar7[-2] = 0;
        puVar7[-1] = 0;
        *puVar7 = 0;
        puVar7[1] = 0x3f800000;
        puVar7[2] = 0;
        puVar7[3] = 0;
        puVar7[4] = 0;
      }
      param_2 = param_2 + 1;
      puVar8 = puVar8 + 1;
      puVar7 = puVar7 + 10;
    } while (param_2 < *(short *)(param_1 + 2));
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

