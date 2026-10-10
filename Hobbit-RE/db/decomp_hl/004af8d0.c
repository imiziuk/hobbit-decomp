
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_004af8d0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined2 param_5)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  char *pcVar10;
  void *pvVar11;
  int *piVar12;
  char *pcVar13;
  int *piVar14;
  float10 fVar15;
  undefined4 *puStack_2f0;
  int *piStack_2ec;
  int *piStack_2e8;
  int *piStack_2e4;
  int local_2d0;
  int local_2cc;
  int iStack_2c8;
  int iStack_2b8;
  int iStack_2b4;
  int iStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined1 local_290 [44];
  undefined4 local_264 [2];
  char local_25c [560];
  void *pvStack_2c;
  undefined4 uStack_24;
  undefined1 uStack_14;
  void *pvStack_c;
  int *piStack_8;
  undefined4 *local_4;
  
  local_4 = (undefined4 *)0xffffffff;
  piStack_8 = (int *)&LAB_006d3fec;
  pvStack_c = ExceptionList;
  piStack_2e4 = (int *)param_4;
  piStack_2e8 = (int *)0x4af8fe;
  ExceptionList = &pvStack_c;
  FUN_004b0eb0();
  bVar1 = *(byte *)((int)param_1 + 0x7f);
  uVar3 = *(ushort *)((int)param_1 + 0x16e);
  *(byte *)((int)param_1 + 0x7f) = bVar1 | 1;
  *(ushort *)((int)param_1 + 0x16e) = uVar3 & 0xffe3 | 3;
  if ((uVar3 & 0x800) != 0) {
    *(byte *)((int)param_1 + 0x7f) = bVar1 & 0xfe;
  }
  piStack_2e4 = (int *)param_4;
  param_1[0x59] = -1;
  *(undefined2 *)(param_1 + 0x5a) = 0;
  *(undefined2 *)((int)param_1 + 0x16a) = param_5;
  piStack_2e8 = (int *)0x4af958;
  piStack_2e4 = (int *)FUN_00434e80();
  piStack_2e8 = (int *)0x4af962;
  FUN_00649b20();
  piStack_2e4 = (int *)local_290;
  local_4 = (undefined4 *)0x0;
  piStack_2e8 = (int *)0x4af975;
  FUN_004b0f30();
  local_4 = (undefined4 *)0xffffffff;
  piStack_2e4 = (int *)0x4af985;
  FUN_00649ba0();
  piStack_2e4 = (int *)0x0;
  piStack_2e8 = (int *)0x4af98d;
  FUN_004afdd0();
  piStack_2e4 = (int *)param_4;
  piStack_2e8 = (int *)0x4af998;
  uVar8 = FUN_00433b30();
  local_2d0 = 0x7fffffff;
  piStack_2ec = &local_2cc;
  piStack_2e8 = (int *)s_Props__s_0072bb30;
  local_4 = (undefined4 *)0x1;
  puStack_2f0 = (undefined4 *)0x4af9bd;
  piStack_2e4 = (int *)uVar8;
  FUN_00649920();
  local_4._0_1_ = 2;
  piStack_2e4 = (int *)0x4af9cf;
  piStack_2e4 = (int *)FUN_00649940();
  piStack_2e8 = &local_2d0;
  piStack_2ec = (int *)0x4af9df;
  FUN_00549430();
  local_4 = (undefined4 *)CONCAT31(local_4._1_3_,1);
  piStack_2e4 = (int *)0x4af9f0;
  FUN_00649950();
  piStack_2e4 = &local_2d0;
  piStack_2e8 = (int *)0x4af9ff;
  iVar9 = FUN_00549470();
  if (iVar9 == 0) {
    piStack_2e8 = &local_2d0;
    piStack_2ec = (int *)0x4afa13;
    piStack_2e4 = (int *)uVar8;
    FUN_00549430();
  }
  else {
    piStack_2e4 = &local_2d0;
    piStack_2e8 = (int *)0x4afa1f;
    FUN_00549580();
  }
  piStack_2e4 = (int *)0x4afa2b;
  FUN_00406a80();
  piStack_2e4 = &local_2d0;
  local_264[0] = 7;
  piStack_2e8 = (int *)0x4afa45;
  pcVar10 = (char *)FUN_005493e0();
  if (pcVar10 == (char *)0x0) {
    pcVar10 = &DAT_0075b6e0;
  }
  pcVar13 = local_25c;
  do {
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    *pcVar13 = cVar2;
    pcVar13 = pcVar13 + 1;
  } while (cVar2 != '\0');
  piStack_2e4 = local_264;
  piStack_2e8 = (int *)s_Geometry_Resource_007299e4;
  piStack_2ec = (int *)0x4afa75;
  (**(code **)(*param_1 + 0xb4))();
  puVar7 = local_4;
  piStack_2ec = param_1 + 0x1a;
  puStack_2f0 = local_4;
  (**(code **)(*param_1 + 0x110))();
  piVar14 = piStack_8;
  param_1[8] = *piStack_8;
  param_1[9] = piStack_8[1];
  param_1[10] = piStack_8[2];
  *(byte *)((int)param_1 + 0x16e) = *(byte *)((int)param_1 + 0x16e) | 0x20;
  if (param_1[0x58] == 0) {
    pvVar11 = operator_new(0x4c);
    param_1[0x58] = (int)pvVar11;
    *(undefined4 *)((int)pvVar11 + 0x48) = 0;
  }
  puVar4 = (undefined4 *)param_1[0x58];
  *puVar4 = *puVar7;
  puVar4[1] = puVar7[1];
  puVar4[2] = puVar7[2];
  iVar9 = param_1[0x58];
  *(int *)(iVar9 + 0xc) = *piVar14;
  *(int *)(iVar9 + 0x10) = piVar14[1];
  *(int *)(iVar9 + 0x14) = piVar14[2];
  fVar15 = (float10)FUN_00647b30();
  *(float *)(param_1[0x58] + 0x18) = (float)fVar15;
  *(undefined4 *)(param_1[0x58] + 0x20) = 0;
  fVar15 = (float10)FUN_00647b30();
  *(float *)(param_1[0x58] + 0x1c) = (float)fVar15;
  FUN_0054bad0();
  FUN_00649600();
  uStack_14 = 3;
  iVar9 = FUN_00406ce0();
  uStack_14 = 1;
  if (iVar9 == -1) {
    FUN_00649720();
  }
  else {
    uVar5 = *(uint *)(DAT_0076f648 + iVar9 * 0x14);
    piVar14 = (int *)(-(uint)((*(byte *)(uVar5 + 0x7f) & 0x10) != 0) & uVar5);
    FUN_00649720();
    if (piVar14 != (int *)0x0) goto LAB_004afc24;
  }
  iStack_2b8 = param_1[0x11];
  iStack_2b4 = param_1[0x12];
  iStack_2b0 = param_1[0x13];
  uStack_2ac = 0xff7fffff;
  uStack_2a8 = 0xff7fffff;
  uStack_2a4 = 0xff7fffff;
  FUN_004357e0();
  *(undefined2 *)(param_1 + 0x5a) = 0;
  FUN_004b0900();
  if ((short)param_1[0x5a] == -1) {
    piVar14 = (int *)0x0;
  }
  else {
    uVar5 = *(uint *)(DAT_0076f648 + (short)param_1[0x5a] * 0x14);
    if (uVar5 == 0) {
      piVar14 = (int *)0x0;
    }
    else {
      piVar14 = (int *)(-(uint)((*(byte *)(uVar5 + 0x7f) & 0x10) != 0) & uVar5);
    }
  }
LAB_004afc24:
  FUN_00488c30();
  (**(code **)(*piVar14 + 0x104))();
  *(byte *)((int)piVar14 + 0x7f) = *(byte *)((int)piVar14 + 0x7f) & 0xfd ^ 2;
  piVar12 = (int *)(**(code **)(*param_1 + 0x38))();
  iVar9 = piVar12[1];
  iVar6 = piVar12[2];
  local_2d0 = piVar12[3];
  local_2cc = piVar12[4];
  iStack_2c8 = piVar12[5];
  piVar14[0xb] = *piVar12;
  piVar14[0xc] = iVar9;
  piVar14[0xd] = iVar6;
  FUN_004357e0();
  (**(code **)(*piVar14 + 0xfc))();
  (**(code **)(*piVar14 + 0x110))();
  *(int *)(param_1[0x58] + 0x48) = (int)(short)piVar14[0x1e];
  uStack_24 = 0xffffffff;
  FUN_00549580(&puStack_2f0);
  FUN_00549350(&puStack_2f0);
  ExceptionList = pvStack_2c;
  return;
}

