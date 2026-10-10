
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004b3400(int *param_1)

{
  byte bVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  float10 fVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d40c8;
  local_c = ExceptionList;
  if ((*(byte *)((int)param_1 + 0x16f) & 1) != 0) {
    return;
  }
  bVar1 = *(byte *)((int)param_1 + 0x7f);
  ExceptionList = &local_c;
  *(byte *)((int)param_1 + 0x7f) = bVar1 | 1;
  if ((*(ushort *)((int)param_1 + 0x16e) & 0x800) != 0) {
    *(byte *)((int)param_1 + 0x7f) = bVar1 & 0xfe;
  }
  *(ushort *)((int)param_1 + 0x16e) = *(ushort *)((int)param_1 + 0x16e) & 0xffdf | 0x100;
  if (param_1[0x58] == 0) {
    pvVar3 = operator_new(0x4c);
    param_1[0x58] = (int)pvVar3;
    *(undefined4 *)((int)pvVar3 + 0x48) = 0;
  }
  param_1[8] = param_1[5];
  param_1[9] = param_1[6];
  param_1[10] = param_1[7];
  iVar4 = param_1[0x58];
  *(int *)(iVar4 + 0x38) = param_1[8];
  *(int *)(iVar4 + 0x3c) = param_1[9];
  *(int *)(iVar4 + 0x40) = param_1[10];
  fVar6 = (float10)FUN_00647b30();
  *(float *)(param_1[0x58] + 0x28) = (float)fVar6;
  *(undefined4 *)(param_1[0x58] + 0x24) = 0;
  fVar6 = (float10)FUN_00647b30();
  *(float *)(param_1[0x58] + 0x44) = (float)fVar6;
  if ((short)param_1[0x5a] != 0) {
    iVar4 = FUN_004b3820();
    if (iVar4 != 0) {
      FUN_0054be30();
    }
    *(undefined2 *)(param_1 + 0x5a) = 0;
  }
  if (*(int *)(param_1[0x58] + 0x48) != 0) {
    ExceptionList = local_c;
    return;
  }
  FUN_0054bad0();
  FUN_00649600();
  local_4 = 0;
  iVar4 = FUN_00406ce0();
  local_4 = 0xffffffff;
  if (iVar4 == -1) {
    FUN_00649720();
  }
  else {
    uVar2 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
    piVar5 = (int *)(-(uint)((*(byte *)(uVar2 + 0x7f) & 0x10) != 0) & uVar2);
    FUN_00649720();
    if (piVar5 != (int *)0x0) goto LAB_004b3619;
  }
  FUN_00404870();
  FUN_004357e0();
  *(undefined2 *)(param_1 + 0x5a) = 0;
  FUN_004b0900();
  if ((short)param_1[0x5a] == -1) {
    piVar5 = (int *)0x0;
  }
  else {
    uVar2 = *(uint *)(DAT_0076f648 + (short)param_1[0x5a] * 0x14);
    if (uVar2 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)(-(uint)((*(byte *)(uVar2 + 0x7f) & 0x10) != 0) & uVar2);
    }
  }
LAB_004b3619:
  FUN_00488c30();
  (**(code **)(*piVar5 + 0x104))();
  *(byte *)((int)piVar5 + 0x7f) = *(byte *)((int)piVar5 + 0x7f) & 0xfd ^ 2;
  (**(code **)(*param_1 + 0x38))();
  FUN_004357e0();
  FUN_004357e0();
  FUN_004357e0();
  FUN_004357e0();
  (**(code **)(*piVar5 + 0xfc))();
  (**(code **)(*piVar5 + 0x110))();
  *(int *)(param_1[0x58] + 0x48) = (int)(short)piVar5[0x1e];
  ExceptionList = local_c;
  return;
}

