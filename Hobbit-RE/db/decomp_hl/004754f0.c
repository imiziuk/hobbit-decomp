
void __fastcall FUN_004754f0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  float *pfVar6;
  float *pfVar7;
  int *piVar8;
  int *piVar9;
  float10 fVar10;
  longlong lVar11;
  undefined1 auStack_b8 [40];
  undefined4 uStack_90;
  undefined1 *puStack_8c;
  undefined4 uStack_64;
  undefined4 uStack_60;
  float fStack_5c;
  undefined1 **ppuStack_58;
  int *local_44;
  undefined1 *local_40;
  float local_3c;
  undefined4 uStack_38;
  float local_24;
  float fStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d18d0;
  pvStack_c = ExceptionList;
  ppuStack_58 = (undefined1 **)s_CINEMA__Starting_popto_00727c68;
  fStack_5c = 8.40779e-45;
  uStack_60 = 0x47551a;
  ExceptionList = &pvStack_c;
  FUN_0064e870();
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 2;
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  ppuStack_58 = (undefined1 **)s_obj_mgr__LockObject_Guid__0071cef0;
  fStack_5c = 6.550887e-39;
  FUN_00649600();
  local_4 = 0;
  uStack_60 = 0x475549;
  fStack_5c = (float)uVar1;
  ppuStack_58 = (undefined1 **)uVar2;
  iVar4 = FUN_00406ce0();
  local_4 = 0xffffffff;
  if (iVar4 == -1) {
    ppuStack_58 = (undefined1 **)0x47555d;
    FUN_00649720();
    piVar9 = (int *)0x0;
  }
  else {
    uVar3 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
    piVar9 = (int *)(-(uint)((*(byte *)(uVar3 + 0x7f) & 0x10) != 0) & uVar3);
    ppuStack_58 = (undefined1 **)0x475584;
    FUN_00649720();
    if ((piVar9 != (int *)0x0) && (*(int *)(param_1 + 0x60) != 0)) {
      ppuStack_58 = (undefined1 **)0x1;
      fStack_5c = 0.0;
      puStack_8c = &DAT_0075b6e0;
      uStack_90 = 0x4755a6;
      FUN_00649b20();
      puStack_8c = (undefined1 *)0x0;
      local_40 = auStack_b8;
      local_4 = 1;
      FUN_00649b60(param_1 + 0x3c);
      local_4 = 0xffffffff;
      (**(code **)(*piVar9 + 0x114))();
    }
  }
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined4 *)(param_1 + 0x2c);
  ppuStack_58 = (undefined1 **)s_obj_mgr__LockObject_Guid__0071cef0;
  fStack_5c = 6.55114e-39;
  FUN_00649600();
  local_4 = 2;
  uStack_60 = 0x4755fe;
  fStack_5c = (float)uVar1;
  ppuStack_58 = (undefined1 **)uVar2;
  iVar4 = FUN_00406ce0();
  local_4 = 0xffffffff;
  if (iVar4 == -1) {
    ppuStack_58 = (undefined1 **)0x475612;
    FUN_00649720();
    piVar8 = (int *)0x0;
  }
  else {
    uVar3 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
    piVar8 = (int *)(-(uint)((*(byte *)(uVar3 + 0x7f) & 0x10) != 0) & uVar3);
    ppuStack_58 = (undefined1 **)0x475633;
    FUN_00649720();
  }
  local_3c = *(float *)(param_1 + 0x34);
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  ppuStack_58 = (undefined1 **)s_obj_mgr__LockObject_Guid__0071cef0;
  fStack_5c = 6.551276e-39;
  FUN_00649600();
  ppuStack_58 = (undefined1 **)local_3c;
  local_4 = 3;
  uStack_60 = 0x475663;
  fStack_5c = (float)uVar1;
  iVar4 = FUN_00406ce0();
  local_4 = 0xffffffff;
  if (iVar4 == -1) {
    ppuStack_58 = (undefined1 **)0x475677;
    FUN_00649720();
    local_44 = (int *)0x0;
  }
  else {
    uVar3 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
    local_44 = (int *)(-(uint)((*(byte *)(uVar3 + 0x7f) & 0x10) != 0) & uVar3);
    ppuStack_58 = (undefined1 **)0x47569d;
    FUN_00649720();
  }
  if ((piVar9 != (int *)0x0) && (piVar8 != (int *)0x0)) {
    ppuStack_58 = (undefined1 **)0x4756b0;
    puVar5 = (undefined4 *)(**(code **)(*piVar8 + 0x28))();
    uStack_60 = *puVar5;
    local_40 = (undefined1 *)&uStack_60;
    fStack_5c = (float)puVar5[1];
    ppuStack_58 = (undefined1 **)puVar5[2];
    uStack_64 = 0x4756d3;
    (**(code **)(*piVar9 + 300))();
    local_3c = (float)piVar9[3];
    iVar4 = piVar9[2];
    ppuStack_58 = (undefined1 **)0x4756e2;
    lVar11 = FUN_0041bcd0();
    if (lVar11 == CONCAT44(local_3c,iVar4)) {
      ppuStack_58 = (undefined1 **)0x4756f3;
      FUN_00424f20();
    }
  }
  if ((*(int *)(param_1 + 0x38) != 0) && (piVar9 != (int *)0x0)) {
    if (local_44 == (int *)0x0) {
      if (piVar8 != (int *)0x0) {
        ppuStack_58 = (undefined1 **)0x47578f;
        puVar5 = (undefined4 *)(**(code **)(*piVar9 + 0x30))();
        uStack_18 = *puVar5;
        uStack_14 = puVar5[1];
        uStack_10 = puVar5[2];
        ppuStack_58 = (undefined1 **)0x4757aa;
        iVar4 = (**(code **)(*piVar8 + 0x30))();
        uStack_14 = *(undefined4 *)(iVar4 + 4);
        ppuStack_58 = (undefined1 **)&uStack_18;
        fStack_5c = 6.551795e-39;
        (**(code **)(*piVar9 + 0x1c))();
      }
    }
    else {
      ppuStack_58 = (undefined1 **)0x475715;
      puVar5 = (undefined4 *)(**(code **)(*piVar9 + 0x30))();
      local_40 = (undefined1 *)*puVar5;
      local_3c = (float)puVar5[1];
      uStack_38 = puVar5[2];
      if (piVar8 == (int *)0x0) {
        iVar4 = *piVar9;
      }
      else {
        iVar4 = *piVar8;
      }
      ppuStack_58 = (undefined1 **)0x47573a;
      pfVar6 = (float *)(**(code **)(iVar4 + 0x28))();
      ppuStack_58 = (undefined1 **)0x475744;
      pfVar7 = (float *)(**(code **)(*local_44 + 0x28))();
      fStack_5c = *pfVar7 - *pfVar6;
      ppuStack_58 = (undefined1 **)(pfVar7[2] - pfVar6[2]);
      uStack_60 = 0x475767;
      local_24 = fStack_5c;
      fStack_1c = (float)ppuStack_58;
      fVar10 = (float10)FUN_0064ca10();
      ppuStack_58 = &local_40;
      local_3c = (float)fVar10;
      fStack_5c = 6.551712e-39;
      (**(code **)(*piVar9 + 0x1c))();
    }
  }
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 4;
  ExceptionList = pvStack_c;
  return;
}

