
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00627bb0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined2 *)(param_1 + 0x42) = 0;
  piVar4 = (int *)FUN_005af120();
  puVar5 = (undefined4 *)(**(code **)(*piVar4 + 0x28))();
  uVar1 = *puVar5;
  fVar3 = (float)puVar5[1] + _DAT_006e9590;
  uVar2 = puVar5[2];
  iVar6 = FUN_00592190();
  *(undefined4 *)(iVar6 + 300) = 1;
  *(undefined4 *)(iVar6 + 0x13c) = 1;
  *(int *)(iVar6 + 0x148) = *(int *)(iVar6 + 0x148) + 1;
  *(int *)(iVar6 + 0x138) = *(int *)(iVar6 + 0x138) + 1;
  *(undefined4 *)(iVar6 + 0x10) = uVar1;
  *(undefined4 *)(iVar6 + 0x18) = uVar2;
  *(float *)(iVar6 + 0x14) = fVar3;
  FUN_005be250();
  return;
}

