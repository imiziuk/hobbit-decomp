
void __fastcall FUN_00418af0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(param_1 + 0x120) * 3 + *(int *)(param_1 + 0x118);
  iVar7 = *(int *)(param_1 + 0x124) * 3 + *(int *)(param_1 + 0x11c);
  iVar3 = FUN_004188d0(iVar8);
  if (iVar3 != 0) {
    iVar3 = FUN_004188d0(iVar7);
    if (iVar3 != 0) goto LAB_00418b34;
  }
  FUN_004189d0();
LAB_00418b34:
  piVar4 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x38 + iVar8 * 8),
                               *(undefined4 *)(param_1 + 0x3c + iVar8 * 8));
  piVar5 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x38 + iVar7 * 8),
                               *(undefined4 *)(param_1 + 0x3c + iVar7 * 8));
  *(int *)(param_1 + 0xe0) = piVar4[2];
  *(int *)(param_1 + 0xe4) = piVar4[3];
  puVar6 = (undefined4 *)(**(code **)(*piVar4 + 0x28))();
  *(undefined4 *)(param_1 + 200) = *puVar6;
  *(undefined4 *)(param_1 + 0xcc) = puVar6[1];
  *(undefined4 *)(param_1 + 0xd0) = puVar6[2];
  *(int *)(param_1 + 0xe8) = piVar5[2];
  *(int *)(param_1 + 0xec) = piVar5[3];
  puVar6 = (undefined4 *)(**(code **)(*piVar5 + 0x28))();
  *(undefined4 *)(param_1 + 0xd4) = *puVar6;
  *(undefined4 *)(param_1 + 0xd8) = puVar6[1];
  *(undefined4 *)(param_1 + 0xdc) = puVar6[2];
  uVar1 = *(undefined4 *)(param_1 + 0x38 + iVar8 * 8);
  uVar2 = *(undefined4 *)(param_1 + 0x3c + iVar8 * 8);
  *(undefined4 *)(param_1 + 0x38 + iVar8 * 8) = *(undefined4 *)(param_1 + 0x38 + iVar7 * 8);
  *(undefined4 *)(param_1 + 0x3c + iVar8 * 8) = *(undefined4 *)(param_1 + 0x3c + iVar7 * 8);
  *(undefined4 *)(param_1 + 0x38 + iVar7 * 8) = uVar1;
  *(undefined4 *)(param_1 + 0x3c + iVar7 * 8) = uVar2;
  *(undefined4 *)(param_1 + 0xf0) = 1;
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x19c) = 1;
  FUN_00659600(s_BilboSplashWater_0071fe04,1);
  return;
}

