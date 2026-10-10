
void __thiscall FUN_005c6a60(int param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined1 local_24 [24];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006df840;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600();
  local_4 = 0;
  if ((((int)param_2 <= *(int *)(param_1 + 0x58)) && (iVar6 = *(int *)(param_1 + 0x6c), iVar6 != 0))
     && (iVar5 = (int)param_2 >> (*(byte *)(param_1 + 0x66) & 0x1f), uVar9 = __allshl(),
        (*(uint *)(iVar6 + iVar5 * 0x18) & (uint)uVar9) == 0 &&
        (*(uint *)(iVar6 + 4 + iVar5 * 0x18) & (uint)((ulonglong)uVar9 >> 0x20)) == 0)) {
    puVar1 = (uint *)(*(int *)(iVar6 + 8 +
                              ((int)param_2 >> (*(byte *)(param_1 + 0x66) & 0x1f)) * 0x18) +
                     (*(uint *)(param_1 + 0x60) & param_2) * 0x28);
    if ((((int)*puVar1 <= *(int *)(param_1 + 0x1c)) && (*(int *)(param_1 + 0x30) != 0)) &&
       ((iVar6 = (int)*puVar1 >> (*(byte *)(param_1 + 0x2a) & 0x1f), uVar9 = __allshl(),
        (*(uint *)(*(int *)(param_1 + 0x30) + iVar6 * 0x18) & (uint)uVar9) == 0 &&
        (*(uint *)(*(int *)(param_1 + 0x30) + 4 + iVar6 * 0x18) & (uint)((ulonglong)uVar9 >> 0x20))
        == 0 && (iVar6 = FUN_005c6fa0(), iVar6 != 0)))) {
      uVar2 = *puVar1;
      uVar3 = *(uint *)(param_1 + 0x24);
      iVar6 = *(int *)(*(int *)(param_1 + 0x30) + 8 +
                      ((int)uVar2 >> (*(byte *)(param_1 + 0x2a) & 0x1f)) * 0x18);
      lVar10 = FUN_0054bad0();
      FUN_00649600();
      local_4._0_1_ = 1;
      iVar5 = FUN_00406ce0();
      local_4 = (uint)local_4._1_3_ << 8;
      if (iVar5 == -1) {
        FUN_00649720();
        piVar8 = (int *)0x0;
      }
      else {
        uVar4 = *(uint *)(DAT_0076f648 + iVar5 * 0x14);
        piVar8 = (int *)(-(uint)((*(byte *)(uVar4 + 0x7f) & 0x10) != 0) & uVar4);
        FUN_00649720();
      }
      FUN_00401f00();
      FUN_00405080();
      FUN_004357e0();
      FUN_00401f00();
      FUN_00402130();
      FUN_004357e0();
      FUN_00425250(puVar1 + 8);
      uVar4 = puVar1[7];
      puVar11 = local_24;
      uVar7 = FUN_00401f00(uVar4,uVar4,uVar4);
      FUN_004c08b0(puVar1 + 1,puVar1 + 4,uVar7,puVar11);
      (**(code **)(*piVar8 + 0x48))();
      (**(code **)(*piVar8 + 0xd0))();
      FUN_004c7010();
      FUN_004c7660();
      *(byte *)((int)piVar8 + 0x15d) = *(byte *)((int)piVar8 + 0x15d) & 0xbf;
      *(undefined1 *)((int)piVar8 + 0x15e) = 0;
      if ((*(byte *)((uVar3 & uVar2) * 0xb8 + iVar6 + 0xb4) & 1) != 0) {
        FUN_004c7c80();
      }
      (**(code **)(*piVar8 + 0x100))();
      (**(code **)(*piVar8 + 0x124))();
      FUN_004ab3e0();
      FUN_004ab450();
      FUN_004ab400();
      FUN_004ab420();
      *(byte *)((int)piVar8 + 0x7f) = *(byte *)((int)piVar8 + 0x7f) & 0xfe;
      piVar8[4] = piVar8[4] | 0x80000000;
      *(undefined1 *)(piVar8 + 0x20) = 0;
      iVar5 = (int)*(short *)(&DAT_0076cd88 +
                             (((uint)lVar10 ^ (uint)((ulonglong)lVar10 >> 0x20)) * -0xfb & 0xfff) *
                             2);
      for (iVar6 = iVar5; iVar6 != -1; iVar6 = (int)*(short *)(DAT_0076f648 + iVar6 * 0x14 + 0xe)) {
      }
      while (iVar5 != -1) {
        piVar8 = (int *)(DAT_0076f648 + iVar5 * 0x14);
        iVar6 = *piVar8;
        if ((iVar6 != 0) && (lVar10 == *(longlong *)(iVar6 + 8))) break;
        iVar5 = (int)*(short *)((int)piVar8 + 0xe);
      }
      *(short *)(puVar1 + 9) = (short)iVar5;
      *(undefined1 *)((int)puVar1 + 0x26) = 0;
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

