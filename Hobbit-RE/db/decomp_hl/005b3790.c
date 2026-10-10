
undefined4 FUN_005b3790(int param_1,float *param_2)

{
  float fVar1;
  ushort uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  float *pfVar6;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006de908;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_InNavSphere_NavNodeFunc_00745558);
  uVar2 = *(ushort *)(param_1 + 0x16);
  local_4 = 0;
  while( true ) {
    uVar5 = (uint)uVar2;
    if (uVar5 == 0xffff) {
      local_4 = 0xffffffff;
      FUN_00649720();
      ExceptionList = pvStack_c;
      return 1;
    }
    iVar3 = *(int *)(&DAT_007782dc + ((int)uVar5 >> 10) * 4);
    piVar4 = *(int **)(iVar3 + 8 + (uVar5 & 0x3ff) * 0xc);
    pfVar6 = (float *)(**(code **)(*piVar4 + 0x28))();
    fVar1 = (float)piVar4[0x34];
    if ((pfVar6[2] - param_2[2]) * (pfVar6[2] - param_2[2]) +
        (pfVar6[1] - param_2[1]) * (pfVar6[1] - param_2[1]) +
        (*pfVar6 - *param_2) * (*pfVar6 - *param_2) <= fVar1 * fVar1 + param_2[3] * param_2[3])
    break;
    uVar2 = *(ushort *)(iVar3 + (uVar5 & 0x3ff) * 0xc);
  }
  DAT_007ba6a8 = DAT_007ba6a8 + 1;
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return 0;
}

