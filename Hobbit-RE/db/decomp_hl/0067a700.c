
void FUN_0067a700(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *local_4;
  
  iVar1 = *param_2;
  iVar6 = 0;
  if (0 < iVar1) {
    local_4 = param_2 + 0x36;
    do {
      if (*(int *)(*local_4 + 0x80) == 0) {
        return;
      }
      iVar2 = *(int *)(*local_4 + 0x78);
      if (iVar2 == 0) {
        return;
      }
      iVar3 = *(int *)(param_1 + 0x18) / iVar1;
      uVar7 = 0x9000;
      iVar5 = param_3 * 0x9000;
      uVar4 = FUN_0067a6f0(*(undefined4 *)(param_1 + 0x10),iVar3 * iVar6,iVar3,iVar5,0x9000);
      FUN_0067b860(iVar2,uVar4,iVar3,iVar5,uVar7);
      iVar6 = iVar6 + 1;
      local_4 = local_4 + 1;
    } while (iVar6 < iVar1);
  }
  param_2[0x3f] = param_2[0x3f] ^ 1;
  param_2[0x35] = param_2[0x35] + 1;
  param_2[0x45] = 0;
  return;
}

