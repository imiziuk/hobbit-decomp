
undefined4 FUN_006589e0(undefined4 param_1,ushort *param_2,undefined4 param_3,int param_4)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong lVar10;
  int local_44;
  byte abStack_40 [64];
  
  uVar1 = *param_2;
  puVar6 = param_2 + 1;
  uVar8 = 0;
  uVar7 = 0;
  local_44 = 4;
  do {
    uVar9 = __allshl();
    uVar7 = uVar7 | (uint)uVar9;
    uVar8 = uVar8 | (uint)((ulonglong)uVar9 >> 0x20);
    local_44 = local_44 + -1;
  } while (local_44 != 0);
  lVar10 = __allshl();
  if (lVar10 + -1 == CONCAT44(uVar8,uVar7)) {
    uVar7 = 0;
    uVar8 = 0;
  }
  iVar4 = 0;
  iVar5 = 0;
  if (uVar1 != 0) {
    do {
      uVar2 = 1 << ((byte)iVar4 & 0x1f);
      if ((uVar2 & uVar7) == 0 && ((int)uVar2 >> 0x1f & uVar8) == 0) {
        abStack_40[iVar5] = (byte)iVar4;
        iVar5 = iVar5 + 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uint)uVar1);
  }
  iVar4 = FUN_00647b10(0,iVar5 + -1);
  uVar7 = (uint)abStack_40[iVar4];
  local_44 = 4;
  do {
    uVar1 = __aullshr();
    *puVar6 = uVar1;
    puVar6 = puVar6 + 1;
    local_44 = local_44 + -1;
  } while (local_44 != 0);
  param_2 = param_2 + 5;
  for (; uVar7 != 0; uVar7 = uVar7 - 1) {
    uVar8 = 0;
    if ((*param_2 & 0x2000) != 0) {
      uVar8 = (uint)(param_2[2] >> 1);
    }
    param_2 = param_2 + uVar8 + 2;
  }
  uVar7 = *param_2 & 0x1fff;
  switch(*param_2 >> 0xe) {
  case 0:
    uVar3 = FUN_006584d0(uVar7,param_1,param_2,param_3,param_4);
    return uVar3;
  case 1:
    uVar3 = FUN_00658660(uVar7,param_1,param_2,param_3,param_4);
    return uVar3;
  case 2:
    uVar3 = FUN_00658670(uVar7,param_1,param_2,param_3,param_4);
    return uVar3;
  case 3:
    uVar3 = FUN_00658d20(param_1,*(undefined4 *)(*(int *)(param_4 + 0x1a8) + uVar7 * 4),param_3,
                         param_4);
    return uVar3;
  default:
    return 0;
  }
}

