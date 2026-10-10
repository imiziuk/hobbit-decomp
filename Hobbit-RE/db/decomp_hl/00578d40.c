
void __thiscall FUN_00578d40(int param_1,undefined4 *param_2)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  undefined1 auStack_56c [1268];
  undefined4 uStack_78;
  undefined4 *puStack_74;
  undefined1 *puStack_70;
  char *pcStack_6c;
  int iStack_58;
  int iStack_54;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dbc58;
  pvStack_c = ExceptionList;
  pcStack_6c = s_Coll_GatherPolyCacheTriangles_00740304;
  puStack_70 = (undefined1 *)0x578d6c;
  ExceptionList = &pvStack_c;
  FUN_00649600();
  *(short *)(param_1 + 0x3d44) = *(short *)(param_1 + 0x3d44) + 1;
  *(undefined4 *)(param_1 + 0x3d28) = 0;
  *(undefined4 *)(param_1 + 0x3d2c) = *param_2;
  *(undefined4 *)(param_1 + 0x3d30) = param_2[1];
  pcStack_6c = (char *)(param_2 + 3);
  *(undefined4 *)(param_1 + 0x3d34) = param_2[2];
  local_4 = 0;
  puStack_70 = (undefined1 *)0x578dac;
  FUN_004357e0();
  pcStack_6c = (char *)0x7f7fffff;
  puStack_70 = (undefined1 *)0x7f7fffff;
  puStack_74 = (undefined4 *)0x7f7fffff;
  *(undefined4 *)(param_1 + 0x4384) = 1;
  uStack_78 = 0x578dce;
  FUN_00404870();
  pcStack_6c = (char *)0xff7fffff;
  puStack_70 = (undefined1 *)0xff7fffff;
  puStack_74 = (undefined4 *)0xff7fffff;
  uStack_78 = 0x578de6;
  FUN_00404870();
  local_44 = *(undefined4 *)(param_1 + 0x3d2c);
  local_3c = *(undefined4 *)(param_1 + 0x3d34);
  local_40 = *(undefined4 *)(param_1 + 0x3d30);
  pcStack_6c = (char *)(param_1 + 0x3d38);
  local_2c = 0x109c01;
  local_28 = 9;
  puStack_70 = (undefined1 *)0x578e24;
  FUN_004357e0();
  pcStack_6c = (char *)&local_44;
  puStack_70 = &LAB_00578c20;
  puStack_74 = &local_44;
  local_24 = -1;
  uStack_78 = 0x578e45;
  FUN_0058a630();
  *(int *)(param_1 + 0x4388) = local_24;
  iVar12 = local_24;
  while (iVar12 != -1) {
    uVar3 = *(uint *)(DAT_0076f648 + iVar12 * 0x14);
    if (uVar3 == 0) {
      piVar9 = (int *)0x0;
    }
    else {
      piVar9 = (int *)(-(uint)((*(byte *)(uVar3 + 0x7f) & 0x10) != 0) & uVar3);
    }
    uVar1 = *(ushort *)((int)piVar9 + 0x7a);
    if ((((uVar1 & 4) == 0) || ((char)piVar9[0x1f] == '.')) &&
       (((uVar1 & 0x200) == 0 ||
        ((((uVar1 & 0x400) == 0 || ((char)piVar9[0x1f] == '+')) || ((char)piVar9[0x1f] == '.'))))))
    {
      pcStack_6c = (char *)0x578eb2;
      (**(code **)(*piVar9 + 0x74))();
      *(short *)(param_1 + 0x3d44) = *(short *)(param_1 + 0x3d44) + 1;
    }
    sVar2 = *(short *)(DAT_0076f648 + 0xc + iVar12 * 0x14);
    *(short *)(param_1 + 0x3d44) = *(short *)(param_1 + 0x3d44) + 1;
    iVar12 = (int)sVar2;
  }
  pcStack_6c = (char *)0x578eda;
  FUN_00577e00();
  if (*(int *)(param_1 + 0x3d28) == 0x100) {
    puVar8 = auStack_56c + -param_1;
    iStack_54 = 1;
    iVar12 = param_1 + 0x528;
    iVar6 = 0x100;
    do {
      iVar11 = iVar12;
      if (iStack_54 < iVar6) {
        iVar6 = iVar6 - iStack_54;
        iVar5 = iVar12;
        do {
          if ((*(uint *)(iVar5 + 0x6c) <= *(uint *)(iVar11 + 0x34)) &&
             ((*(uint *)(iVar5 + 0x6c) < *(uint *)(iVar11 + 0x34) ||
              (*(uint *)(iVar5 + 0x68) < *(uint *)(iVar11 + 0x30))))) {
            iVar11 = iVar5 + 0x38;
          }
          iVar6 = iVar6 + -1;
          iVar5 = iVar5 + 0x38;
        } while (iVar6 != 0);
      }
      puVar10 = &local_44;
      puVar7 = (undefined4 *)(iVar12 + 8);
      iStack_58 = 3;
      do {
        *puVar10 = puVar7[-2];
        puVar10[1] = puVar7[-1];
        *(undefined4 *)((int)puVar7 + (int)puVar8) = *puVar7;
        puVar10 = puVar10 + 3;
        puVar7 = puVar7 + 3;
        iStack_58 = iStack_58 + -1;
      } while (iStack_58 != 0);
      uStack_20 = *(undefined4 *)(iVar12 + 0x24);
      uStack_1c = *(undefined4 *)(iVar12 + 0x28);
      uStack_14 = *(undefined4 *)(iVar12 + 0x30);
      uStack_10 = *(undefined4 *)(iVar12 + 0x34);
      iStack_58 = 3;
      iVar6 = iVar12;
      do {
        pcStack_6c = (char *)((iVar11 - iVar12) + iVar6);
        puStack_70 = (undefined1 *)0x578faf;
        FUN_004357e0();
        iVar6 = iVar6 + 0xc;
        iStack_58 = iStack_58 + -1;
      } while (iStack_58 != 0);
      *(undefined4 *)(iVar12 + 0x24) = *(undefined4 *)(iVar11 + 0x24);
      *(undefined4 *)(iVar12 + 0x28) = *(undefined4 *)(iVar11 + 0x28);
      *(undefined4 *)(iVar12 + 0x30) = *(undefined4 *)(iVar11 + 0x30);
      pcStack_6c = (char *)&local_44;
      *(undefined4 *)(iVar12 + 0x34) = *(undefined4 *)(iVar11 + 0x34);
      puStack_70 = (undefined1 *)0x578fe1;
      FUN_00579030();
      puVar8 = puVar8 + -0x38;
      iVar6 = *(int *)(param_1 + 0x3d28);
      iVar12 = iVar12 + 0x38;
      bVar4 = iStack_54 < iVar6;
      iStack_54 = iStack_54 + 1;
    } while (bVar4);
  }
  local_4 = 0xffffffff;
  pcStack_6c = (char *)0x57901a;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

