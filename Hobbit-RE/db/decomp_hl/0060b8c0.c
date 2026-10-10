
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0060b8c0(int param_1,float param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  float *pfVar5;
  float *pfVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 *puVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_84 [32];
  undefined4 uStack_64;
  float fStack_60;
  char *pcStack_5c;
  undefined1 auStack_38 [44];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e3ce0;
  pvStack_c = ExceptionList;
  iVar8 = *(int *)(param_1 + 0x50);
  uVar7 = *(undefined4 *)(param_1 + 0x84);
  uVar1 = *(undefined4 *)(param_1 + 0x80);
  pcStack_5c = s_obj_mgr__LockObject_Guid__0071cef0;
  fStack_60 = 8.882566e-39;
  ExceptionList = &pvStack_c;
  FUN_00649600();
  local_4 = 0;
  uStack_64 = 0x60b90f;
  fStack_60 = (float)uVar1;
  pcStack_5c = (char *)uVar7;
  iVar3 = FUN_00406ce0();
  local_4 = 0xffffffff;
  if (iVar3 == -1) {
    pcStack_5c = (char *)0x60b925;
    FUN_00649720();
    uVar10 = 0;
  }
  else {
    uVar10 = *(uint *)(DAT_0076f648 + iVar3 * 0x14);
    uVar10 = -(uint)((*(byte *)(uVar10 + 0x7f) & 0x10) != 0) & uVar10;
    pcStack_5c = (char *)0x60b94c;
    FUN_00649720();
  }
  pcStack_5c = (char *)0x60b956;
  piVar4 = (int *)FUN_005af120();
  pcStack_5c = (char *)0x60b95d;
  pfVar5 = (float *)(**(code **)(*piVar4 + 0x28))();
  pcStack_5c = (char *)0x60b967;
  piVar4 = (int *)FUN_005af120();
  pcStack_5c = (char *)0x60b96e;
  pfVar6 = (float *)(**(code **)(*piVar4 + 0x2c))();
  puVar9 = param_3;
  switch(*(undefined2 *)(param_1 + 0x42)) {
  case 0:
    if (*(int *)(param_1 + 0x80) == 0 && *(int *)(param_1 + 0x84) == 0) {
      puVar9 = (undefined1 *)((iVar8 < 1) + 5);
    }
    else {
      pcStack_5c = (char *)0x60bb85;
      FUN_005af120();
      pcStack_5c = (char *)0x60bb8c;
      iVar8 = FUN_004a2970();
      puVar9 = (undefined1 *)((-(uint)(iVar8 != 2) & 3) + 6);
    }
    break;
  default:
    if (*(int *)(param_1 + 0x80) == 0 && *(int *)(param_1 + 0x84) == 0) {
      puVar9 = (undefined1 *)((iVar8 < 1) + 5);
    }
    else {
      pcStack_5c = (char *)0x60bbc1;
      FUN_005af120();
      pcStack_5c = (char *)0x60bbc8;
      iVar8 = FUN_004a2970();
      puVar9 = (undefined1 *)((-(uint)(iVar8 != 2) & 3) + 6);
    }
    break;
  case 5:
    pcStack_5c = (char *)0x60b9ee;
    FUN_005af120();
    pcStack_5c = (char *)0x60b9f5;
    lVar11 = FUN_00467700();
    puVar9 = param_3;
    if (lVar11 != 0) {
      *(int *)(param_1 + 0x78) = (int)*(short *)(param_1 + 0x42);
      pcStack_5c = (char *)0x60ba08;
      uVar7 = FUN_005af960();
      *(undefined4 *)(param_1 + 0x7c) = uVar7;
      puVar9 = (undefined1 *)0x7;
    }
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) {
      puVar9 = (undefined1 *)((*(int *)(param_1 + 0x50) < 1) + 5);
      pcStack_5c = *(char **)(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 100) * 4);
      fStack_60 = 8.883036e-39;
      iVar8 = FUN_005af220();
      if (iVar8 != 0) {
        pcStack_5c = auStack_38;
        fStack_60 = 8.883064e-39;
        pcStack_5c = (char *)FUN_005ac560();
        local_4 = 1;
        fStack_60 = 8.883085e-39;
        FUN_0064a320();
        local_4 = 0xffffffff;
        pcStack_5c = (char *)0x60ba7e;
        FUN_00649ba0();
        pcStack_5c = &DAT_007cc684;
        fStack_60 = 8.883127e-39;
        iVar8 = FUN_005af160();
        if (iVar8 != 0) {
          pcStack_5c = &DAT_007cc684;
          fStack_60 = 8.883156e-39;
          iVar8 = FUN_005af160();
          if (iVar8 != 0) {
            param_3 = auStack_84;
            FUN_00649b60(&DAT_007cc684);
            FUN_005bed00();
            puVar9 = (undefined1 *)0x1;
          }
        }
      }
    }
    break;
  case 6:
    if (uVar10 != 0) {
      if (_DAT_00748e78 <
          SQRT((pfVar6[2] - pfVar5[2]) * (pfVar6[2] - pfVar5[2]) +
               (pfVar6[1] - pfVar5[1]) * (pfVar6[1] - pfVar5[1]) +
               (*pfVar6 - *pfVar5) * (*pfVar6 - *pfVar5))) {
        param_3 = (undefined1 *)0xa;
      }
      fVar2 = param_2 + *(float *)(param_1 + 0x74);
      *(float *)(param_1 + 0x74) = fVar2;
      puVar9 = param_3;
      if (*(float *)(param_1 + 0x70) <= fVar2) {
        pcStack_5c = (char *)&param_3;
        fStack_60 = 8.88336e-39;
        iVar8 = FUN_0060b770();
        puVar9 = param_3;
        if (iVar8 == 0) {
          puVar9 = (undefined1 *)0x8;
        }
      }
      break;
    }
  case 0xb:
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) {
      puVar9 = (undefined1 *)0x6;
    }
    break;
  case 7:
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) {
      puVar9 = *(undefined1 **)(param_1 + 0x78);
    }
    break;
  case 8:
  case 10:
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) {
      pcStack_5c = (char *)&param_3;
      fStack_60 = 8.88287e-39;
      iVar8 = FUN_0060b770();
      puVar9 = param_3;
      if (iVar8 == 0) {
        puVar9 = (undefined1 *)0x6;
      }
    }
    break;
  case 9:
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) {
      puVar9 = (undefined1 *)0x6;
    }
  }
  fStack_60 = param_2;
  uStack_64 = 0x60bbf8;
  pcStack_5c = puVar9;
  FUN_005be370();
  ExceptionList = pvStack_c;
  return;
}

