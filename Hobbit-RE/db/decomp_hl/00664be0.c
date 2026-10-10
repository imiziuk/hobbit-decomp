
/* WARNING: Removing unreachable block (ram,0x00664da4) */
/* WARNING: Removing unreachable block (ram,0x00664dbc) */
/* WARNING: Removing unreachable block (ram,0x00664dc0) */
/* WARNING: Removing unreachable block (ram,0x00664dd1) */
/* WARNING: Removing unreachable block (ram,0x00664dd8) */

undefined4 * __thiscall
FUN_00664be0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            uint param_5,int param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  undefined2 *puVar4;
  uint uVar5;
  undefined2 *puVar6;
  void *pvVar7;
  undefined2 *puVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e6b05;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = DAT_007edb20;
  param_1[7] = param_4;
  param_1[6] = param_3;
  param_1[5] = param_2;
  *(undefined1 *)(param_1 + 8) = (undefined1)param_2;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_00667230(0,param_6,param_6 + param_5 * 2);
  local_4 = 0;
  param_1[0xc] = 0;
  param_1[0xd] = param_7;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_006f95dc;
  if ((param_5 & 1) != 0) {
    puVar8 = (undefined2 *)param_1[10];
    puVar6 = (undefined2 *)(param_1[10] + -2);
    if (param_1[0xb] - (int)puVar8 >> 1 == 0) {
      iVar1 = param_1[9];
      if ((iVar1 == 0) || (uVar5 = (int)puVar8 - iVar1 >> 1, uVar5 < 2)) {
        uVar5 = 1;
      }
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = (int)puVar8 - iVar1 >> 1;
      }
      iVar1 = iVar1 + uVar5;
      iVar2 = iVar1;
      if (iVar1 < 0) {
        iVar2 = 0;
      }
      pvVar3 = operator_new(iVar2 * 2);
      pvVar7 = pvVar3;
      for (puVar4 = (undefined2 *)param_1[9]; puVar4 != puVar8; puVar4 = puVar4 + 1) {
        FUN_005b88b0(pvVar7,puVar4);
        pvVar7 = (void *)((int)pvVar7 + 2);
      }
      FUN_005b8880(pvVar7,1,puVar6);
      FUN_005b8850(puVar8,param_1[10],(int)pvVar7 + 2);
      FUN_005b8840(param_1[9],param_1[10]);
      FUN_006bf840(param_1[9]);
      param_1[0xb] = (void *)((int)pvVar3 + iVar1 * 2);
      iVar1 = FUN_005b8820();
      param_1[10] = (int)pvVar3 + iVar1 * 2 + 2;
      param_1[9] = pvVar3;
    }
    else {
      FUN_005b8850(puVar8,puVar8,puVar8 + 1);
      FUN_005b8880(param_1[10],1 - (param_1[10] - (int)puVar8 >> 1),puVar6);
      puVar4 = (undefined2 *)param_1[10];
      for (; puVar8 != puVar4; puVar8 = puVar8 + 1) {
        *puVar8 = *puVar6;
      }
      param_1[10] = param_1[10] + 2;
    }
  }
  ExceptionList = local_c;
  return param_1;
}

